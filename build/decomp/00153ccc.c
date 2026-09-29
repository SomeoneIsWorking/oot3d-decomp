// OoT3D decomp @ 00153ccc  name=FUN_00153ccc  size=304

void FUN_00153ccc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  float fVar9;
  float extraout_s0;
  float fVar10;

  fVar10 = DAT_00153dfc;
  iVar8 = FUN_003731e0(param_1 + 0x1a4);
  iVar6 = DAT_00153e20;
  iVar1 = DAT_00153e14;
  fVar9 = DAT_00153e10;
  uVar5 = DAT_00153e0c;
  uVar4 = DAT_00153e08;
  uVar3 = DAT_00153e04;
  iVar2 = DAT_00153e00;
  if (*(int *)(param_1 + 0x1e0) < DAT_00153e00) {
    *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x2c) + DAT_00153e10;
    *(float *)(iVar1 + 4) = *(float *)(iVar1 + 4) - fVar9;
    *(float *)(iVar1 + 0x10) = *(float *)(iVar1 + 0x10) - fVar9;
    fVar9 = (float)FUN_0036e168(DAT_00153e18,uVar4,*(undefined4 *)(param_1 + 0x6c),uVar3,
                                param_1 + 0xedc);
  }
  else {
    fVar10 = *(float *)(param_1 + 0x6c) * DAT_00153e1c;
    *(float *)(param_1 + 0x6c) = fVar10;
    if (iVar6 < (int)fVar10) {
      fVar10 = DAT_00153e24;
    }
    *(float *)(param_1 + 0x6c) = fVar10;
    fVar10 = (float)FUN_0036e168(uVar5,uVar4,fVar10,uVar3,param_1 + 0xedc);
    fVar9 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0xc),DAT_00153e30,DAT_00153e2c,
                                DAT_00153e28,param_1 + 0x2c);
    fVar10 = extraout_s0 + fVar10;
  }
  puVar7 = DAT_00153e34;
  iVar1 = 0;
  if (iVar8 != 0) {
    iVar1 = (int)fVar10 - iVar2;
    fVar9 = fVar10;
  }
  if (iVar1 < 0 != (iVar8 != 0 && SBORROW4((int)fVar9,iVar2))) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0xedc) = uVar5;
    FUN_003672b8(*puVar7);
    FUN_003672b8(puVar7[1]);
    *(undefined2 *)(param_1 + 0x234) = 0xc5;
    *(undefined1 *)(param_1 + 0x231) = 0;
    *(undefined4 *)(param_1 + 0x22c) = DAT_00153e38;
  }
  return;
}
