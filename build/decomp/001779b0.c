// OoT3D decomp @ 001779b0  name=FUN_001779b0  size=216

void FUN_001779b0(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  float fVar3;
  int iVar4;
  float fVar5;

  uVar1 = DAT_00177a8c;
  if (((*DAT_00177a88 & 1) == 0) &&
     (iVar4 = FUN_003679b4(DAT_00177a88), puVar2 = DAT_00177a90, iVar4 != 0)) {
    *DAT_00177a90 = uVar1;
    puVar2[1] = uVar1;
    puVar2[2] = uVar1;
  }
  fVar3 = DAT_00177aa0;
  iVar4 = DAT_00177a98;
  fVar5 = *(float *)(param_1 + 100) + DAT_00177a94;
  *(float *)(param_1 + 100) = fVar5;
  if (iVar4 < (int)fVar5) {
    fVar5 = DAT_00177a9c;
  }
  *(float *)(param_1 + 100) = fVar5;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  iVar4 = FUN_003705a0(*(float *)(param_1 + 0xc) - fVar3,param_1 + 0x2c);
  if (iVar4 == 0) {
    FUN_00373264(param_1,DAT_00177aa4);
  }
  if (*(short *)(param_1 + 0x1c2) == 0) {
    *(undefined4 *)(param_1 + 100) = uVar1;
    *(undefined2 *)(param_1 + 0x1c2) = 0xb4;
    *(undefined4 *)(param_1 + 0x1bc) = DAT_00177aa8;
  }
  return;
}
