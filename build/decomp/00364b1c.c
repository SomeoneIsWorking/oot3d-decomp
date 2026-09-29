// OoT3D decomp @ 00364b1c  name=FUN_00364b1c  size=228

undefined4 FUN_00364b1c(undefined4 param_1,int param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  iVar2 = FUN_00346e2c(DAT_00364c04,DAT_00364c00);
  uVar3 = 0;
  if (iVar2 != 0) {
    sVar1 = FUN_0036e800(param_2,iVar2);
    *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe);
    iVar4 = (int)(short)(sVar1 - *(short *)(param_2 + 0xbe));
    fVar5 = (float)FUN_0035a4fc(param_2,iVar2 + 0x28);
    if ((DAT_00364c08 < iVar4 + 11999U) || (DAT_00364c0c <= (int)SQRT(fVar5))) {
      *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
      iVar2 = iVar4;
      if (iVar4 < 0) {
        iVar2 = -iVar4;
      }
      if (iVar2 - 0x2000U < 0x4000) {
        if (iVar4 + 0x5ffeU <= DAT_00364c14) {
          FUN_00364a2c(param_2);
        }
      }
      else {
        FUN_00362f48(param_2,param_1);
        *(float *)(param_2 + 0x6c) = *(float *)(param_2 + 0x6c) * DAT_00364c10;
      }
    }
    else {
      FUN_0035b578(param_2);
    }
    uVar3 = 1;
  }
  return uVar3;
}
