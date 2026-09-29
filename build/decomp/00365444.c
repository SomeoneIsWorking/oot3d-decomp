// OoT3D decomp @ 00365444  name=FUN_00365444  size=260

undefined4 FUN_00365444(undefined4 param_1,int param_2)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;

  psVar2 = (short *)FUN_00346e2c(DAT_0036554c,DAT_00365548);
  uVar4 = 0;
  if (psVar2 != (short *)0x0) {
    sVar1 = FUN_0036e800(param_2,psVar2);
    *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe);
    iVar5 = (int)(short)(sVar1 - *(short *)(param_2 + 0xbe));
    fVar6 = (float)FUN_0035a4fc(param_2,psVar2 + 0x14);
    if ((DAT_00365550 < iVar5 + 11999U) || (DAT_00365554 <= (int)SQRT(fVar6))) {
      *(short *)(param_2 + 0x36) = *(short *)(param_2 + 0xbe) + 0x3fff;
      iVar3 = iVar5;
      if (iVar5 < 0) {
        iVar3 = -iVar5;
      }
      if (iVar3 - 0x2000U < 0x4000) {
        if (iVar5 + 0x5ffeU <= DAT_0036555c) {
          FUN_00364fbc(param_2);
        }
      }
      else {
        FUN_0034c4a0(param_2,param_1);
        *(float *)(param_2 + 0x6c) = *(float *)(param_2 + 0x6c) * DAT_00365558;
      }
    }
    else if (*psVar2 == 0x66) {
      FUN_00365030();
    }
    else {
      FUN_0035b5f4(param_2);
    }
    uVar4 = 1;
  }
  return uVar4;
}
