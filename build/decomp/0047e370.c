// OoT3D decomp @ 0047e370  name=FUN_0047e370  size=152

undefined4 FUN_0047e370(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int local_30 [2];
  int local_28;
  int local_1c;

  if (*(char *)(param_1 + 0x38) == '\x01') {
    return 0;
  }
  iVar2 = 0;
  iVar1 = FUN_0048c138(param_2,local_30);
  if (iVar1 != 0) {
    iVar2 = local_1c + local_30[0] + local_28;
  }
  FUN_002ea050(param_1 + 8,param_3,param_4,0x2c);
  *(int *)(param_1 + 0x30) = param_4;
  *(int *)(param_1 + 0x34) = param_4 + iVar2 * -0x2c;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined1 *)(param_1 + 0x38) = 1;
  return 1;
}
