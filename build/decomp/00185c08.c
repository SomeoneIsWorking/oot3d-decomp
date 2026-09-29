// OoT3D decomp @ 00185c08  name=FUN_00185c08  size=416

void FUN_00185c08(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  short *psVar5;
  float fVar6;
  float fVar7;
  undefined4 uVar8;

  uVar3 = DAT_00185db0;
  uVar2 = DAT_00185dac;
  fVar7 = DAT_00185da8;
  psVar5 = (short *)(param_1 + 0xc00);
  if (*(float *)(param_1 + 0xc18) <
      (*(float *)(param_1 + 0x2c) + *(float *)(param_1 + 100) * DAT_00185da8) -
      *(float *)(param_1 + 0x84)) {
    *(undefined4 *)(param_1 + 0x978) = DAT_00185dc0;
    iVar4 = FUN_00369bec(param_1,param_2);
    if (iVar4 == 0) {
      uVar8 = DAT_00185dcc;
      if ((*(uint *)(param_2 + 0xf8) & 8) != 0) {
        uVar8 = DAT_00185dd0;
      }
      FUN_0036e168(uVar8,DAT_00185dd4,uVar3,uVar2,param_1 + 100);
      return;
    }
    if (*psVar5 == 0) {
      fVar7 = (float)FUN_00369c88(param_1,4);
      *(short *)(param_1 + 0xc0c) = (short)(int)fVar7;
    }
    uVar2 = DAT_00185dc8;
    *(undefined4 *)(param_1 + 100) = DAT_00185dc4;
    *(undefined4 *)(param_1 + 0x978) = uVar2;
    *(undefined2 *)(param_1 + 0xc08) = 0;
  }
  else {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc18) + *(float *)(param_1 + 0x84);
    fVar6 = (float)FUN_00369c88(param_1,3);
    *(short *)(param_1 + 0xc0c) = (short)(int)fVar6;
    *(ushort *)(param_1 + 0xca2) = *(ushort *)(param_1 + 0xca2) | 4;
    *(undefined4 *)(param_1 + 0x978) = DAT_00185db4;
    if ((*psVar5 != 0) && (sVar1 = *psVar5 + -1, *psVar5 = sVar1, sVar1 == 0)) {
      FUN_00369c88(param_1,2);
    }
    if ((*(short *)(param_1 + 0xc0c) != 0) &&
       (sVar1 = *(short *)(param_1 + 0xc0c) + -1, *(short *)(param_1 + 0xc0c) = sVar1, sVar1 == 0))
    {
      FUN_00369c88(param_1,2);
    }
    if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xc18)) {
      FUN_0036e168(fVar7,DAT_00185dbc,uVar3,uVar2,param_1 + 100);
      return;
    }
    *(undefined4 *)(param_1 + 0x978) = DAT_00185db8;
    *(undefined2 *)(param_1 + 0xc08) = 0;
  }
  return;
}
