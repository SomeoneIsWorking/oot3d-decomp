// OoT3D decomp @ 00176e24  name=FUN_00176e24  size=220

void FUN_00176e24(int param_1)

{
  float fVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  float fVar5;

  iVar4 = FUN_003731e0(param_1 + 0x5b0);
  fVar2 = DAT_00176f04;
  fVar1 = DAT_00176f00;
  if (iVar4 == 0) {
    fVar5 = DAT_00176f00;
    if ((0x3f7fffff < *(int *)(param_1 + 0x5ec)) &&
       (fVar5 = DAT_00176f04, *(int *)(param_1 + 0x5ec) <= DAT_00176f08)) {
      fVar5 = *(float *)(param_1 + 0x5ec);
    }
    *(float *)(param_1 + 500) = (DAT_00176f04 - fVar5) * DAT_00176f0c;
  }
  else {
    FUN_001e8b34(param_1);
  }
  iVar4 = FUN_003736fc(DAT_00176f10,fVar1,param_1 + 0x5b0);
  uVar3 = DAT_00176f14;
  if (iVar4 != 0) {
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) & 0xfe;
  }
  FUN_00373500(*(undefined4 *)(param_1 + 8),uVar3,fVar2,param_1 + 0x28);
  FUN_00373500(*(undefined4 *)(param_1 + 0x10),uVar3,fVar2,param_1 + 0x30);
  return;
}
