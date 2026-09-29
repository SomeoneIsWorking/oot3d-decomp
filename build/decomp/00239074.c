// OoT3D decomp @ 00239074  name=FUN_00239074  size=152

void FUN_00239074(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_00370378(param_1 + 0xbe,(int)*(short *)(param_1 + 0x92),0x100);
  iVar3 = FUN_0036bc98(param_1,param_2);
  uVar2 = DAT_0023911c;
  iVar1 = DAT_00239118;
  if (iVar3 == 0) {
    if (*(int *)(param_1 + 0x98) < DAT_00239110) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x10000;
      *(undefined2 *)(iVar1 + param_1) = *(undefined2 *)(DAT_00239114 + param_1);
      FUN_0036bb28(uVar2,param_1,param_2);
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xb18) = DAT_0023910c;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffeffff;
  }
  FUN_00373264(param_1,DAT_00239120);
  return;
}
