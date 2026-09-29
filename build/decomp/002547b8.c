// OoT3D decomp @ 002547b8  name=FUN_002547b8  size=108

void FUN_002547b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;

  iVar4 = *(int *)(param_2 + 0x20ac);
  iVar1 = FUN_00357378(param_2);
  uVar2 = DAT_00254828;
  if (iVar1 != 0xd && iVar1 != 0x11) {
    if (*(short *)(param_1 + 0x20c) < 1) {
      *(undefined4 *)(param_1 + 0x13c) = DAT_00254824;
      FUN_0036f59c(iVar4,uVar2);
    }
    else {
      *(short *)(param_1 + 0x20c) = *(short *)(param_1 + 0x20c) + -1;
    }
    uVar2 = *(undefined4 *)(iVar4 + 0x2c);
    uVar3 = *(undefined4 *)(iVar4 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar4 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar2;
    *(undefined4 *)(param_1 + 0x30) = uVar3;
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
