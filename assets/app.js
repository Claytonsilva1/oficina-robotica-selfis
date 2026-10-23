
document.querySelectorAll('.btn-copy').forEach(b=>b.addEventListener('click',async()=>{
  const t=document.getElementById(b.dataset.target).innerText;
  try{await navigator.clipboard.writeText(t);}catch(e){const a=document.createElement('textarea');a.value=t;document.body.appendChild(a);a.select();document.execCommand('copy');a.remove();}
  const o=b.textContent;b.textContent='Copiado!';b.classList.add('ok');setTimeout(()=>{b.textContent=o;b.classList.remove('ok')},1600);
}));