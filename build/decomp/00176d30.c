// OoT3D decomp @ 00176d30  name=FUN_00176d30  size=220

void FUN_00176d30(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  iVar4 = FUN_003731e0(param_1 + 0x208);
  fVar2 = DAT_00176e10;
  fVar1 = DAT_00176e0c;
  if (iVar4 == 0) {
    fVar5 = DAT_00176e0c;
    if ((0x3f7fffff < *(int *)(param_1 + 0x244)) &&
       (fVar5 = DAT_00176e10, *(int *)(param_1 + 0x244) <= DAT_00176e14)) {
      fVar5 = *(float *)(param_1 + 0x244);
    }
    *(float *)(param_1 + 500) = (DAT_00176e10 - fVar5) * DAT_00176e18;
  }
  else {
    FUN_001e8ac0(param_1);
  }
  iVar4 = FUN_003736fc(DAT_00176e1c,fVar1,param_1 + 0x208);
  uVar3 = DAT_00176e20;
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 8),uVar3,fVar2,param_1 + 0x28);
  FUN_00373500(*(undefined4 *)(param_1 + 0x10),uVar3,fVar2,param_1 + 0x30);
  return;
}
