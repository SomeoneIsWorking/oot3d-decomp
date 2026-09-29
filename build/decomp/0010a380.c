// OoT3D decomp @ 0010a380  name=FUN_0010a380  size=256

void FUN_0010a380(int param_1,int param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_1c;
  float local_18;
  undefined4 local_14;

  iVar4 = *(int *)(param_2 + 0x20ac);
  FUN_00370734(param_1 + 0x1a4);
  if ((int)*(short *)(param_1 + 0xbc) - 1U < DAT_0010a480) {
    local_1c = *(undefined4 *)(iVar4 + 0x28);
    local_18 = *(float *)(iVar4 + 0x2c) + DAT_0010a484;
    local_14 = *(undefined4 *)(iVar4 + 0x30);
    uVar3 = FUN_0036e10c(param_1,&local_1c);
    iVar4 = FUN_00370378(param_1 + 0xbc,uVar3,0x1000);
    fVar1 = DAT_0010a48c;
    if (iVar4 != 0) {
      iVar4 = *(int *)(param_2 + 0x20ac);
      *(undefined4 *)(param_1 + 100) = DAT_0010a488;
      *(float *)(param_1 + 0x7e8) = *(float *)(iVar4 + 0x2c) + fVar1;
      uVar3 = DAT_0010a490;
      *(byte *)(param_1 + 0x800) = *(byte *)(param_1 + 0x800) & 0xfd | 1;
      *(undefined4 *)(param_1 + 0x7dc) = uVar3;
    }
  }
  else {
    *(short *)(param_1 + 0xbc) = *(short *)(param_1 + 0xbc) + -0x1000;
  }
  uVar2 = DAT_0010a498;
  uVar3 = DAT_0010a494;
  *(short *)(param_1 + 0x34) = -*(short *)(param_1 + 0xbc);
  FUN_003705a0(uVar2,uVar3,param_1 + 0x6c);
  FUN_00370084(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),2,DAT_0010a49c);
  FUN_00373264(param_1,DAT_0010a4a0);
  return;
}
