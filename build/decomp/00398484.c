// OoT3D decomp @ 00398484  name=FUN_00398484  size=244

void FUN_00398484(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint in_fpscr;
  float fVar3;
  undefined1 auStack_14 [4];
  short sStack_10;

  FUN_0031cb28();
  cVar1 = *(char *)(iRam00398578 + 9);
  if ((cVar1 == '\n' || cVar1 == '\v') || cVar1 == '\f') {
    FUN_003731e0(param_1 + 0x1a4);
  }
  else if (cVar1 == '\r') {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0xd);
    fVar3 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(fRam0039857c,fVar3 - fRam0039857c,fVar3,uRam00398580,param_1 + 0x1a4,0xd,1);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
    *(undefined4 *)(param_1 + 0xf90) = uRam00398584;
  }
  uVar2 = uRam00398588;
  FUN_00375a18(param_1 + 0xff6,(int)(short)(*(short *)(param_1 + 0xbe) - *(short *)(param_1 + 0xbc))
               ,1,uRam00398588,0);
  FUN_00334e70(*(int *)(param_1 + 0x21c) + 0x9c,auStack_14,0);
  FUN_00375a18(param_1 + 0xff4,(int)sStack_10,1,uVar2,0);
  return;
}
