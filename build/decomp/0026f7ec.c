// OoT3D decomp @ 0026f7ec  name=FUN_0026f7ec  size=320

void FUN_0026f7ec(float param_1)

{
  int iVar1;
  int iVar2;
  float fVar3;
  uint uVar4;
  
  iVar1 = DAT_0026f92c;
  if ((*(char *)(DAT_0026f92c + 0xc) == -0x7f) && (iVar2 = FUN_00366684(0), iVar2 != DAT_0026f930))
  {
    if (*(float *)(iVar1 + 0x6c) != param_1) {
      fVar3 = DAT_0026f93c;
      if ((DAT_0026f934 <= (int)param_1) && (fVar3 = DAT_0026f938, (int)param_1 <= DAT_0026f940)) {
        fVar3 = param_1 - DAT_0026f944;
      }
      uVar4 = (uint)((DAT_0026f938 - fVar3) * DAT_0026f948 * DAT_0026f94c);
      *(char *)(iVar1 + 0xd) = (char)uVar4;
      FUN_00355fac(3,3,uVar4 & 0xff,0x1e);
      iVar2 = FUN_0032e658();
      if (iVar2 == 0) {
        FUN_00355fac(0,3,'\x7f' - *(char *)(iVar1 + 0xd),10);
      }
      iVar2 = FUN_0032c800(3);
      if ((iVar2 != 0) &&
         ((iVar2 = FUN_0032c800(0), iVar2 != 0 || (iVar2 = FUN_0032e658(), iVar2 != 0)))) {
        *(float *)(iVar1 + 0x6c) = param_1;
      }
    }
    iVar2 = FUN_0032e658();
    if (iVar2 == 0) {
      FUN_0033c9fc((int)*(char *)(iVar1 + 0xd));
      return;
    }
  }
  return;
}

