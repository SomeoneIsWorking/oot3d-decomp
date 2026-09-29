// OoT3D decomp @ 00302424  name=FUN_00302424  size=216

int FUN_00302424(int param_1,undefined4 *param_2,undefined4 *param_3,int param_4,int *param_5,
                uint param_6)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int local_28;

  uVar2 = *(uint *)(param_1 + 0x10) + param_6;
  iVar3 = *(int *)(param_1 + 0x14) + (uint)CARRY4(*(uint *)(param_1 + 0x10),param_6);
  iVar1 = FUN_00302540(*(undefined4 *)(param_1 + 0x1c),*(int *)(param_1 + 0x14),uVar2,iVar3,
                       &local_3c,0x18);
  if ((-1 < iVar1) &&
     (((param_4 == 0 || param_5 == (int *)0x0 || (*param_5 = local_28, local_28 == 0)) ||
      (iVar3 = iVar3 + (uint)(0xffffffe7 < uVar2),
      iVar1 = FUN_00302540(*(undefined4 *)(param_1 + 0x1c),iVar3,uVar2 + 0x18,iVar3,param_4,local_28
                          ), -1 < iVar1)))) {
    iVar1 = 0;
  }
  if (-1 < iVar1) {
    *param_2 = local_3c;
    iVar1 = 0;
    *param_3 = local_38;
    param_3[1] = uStack_34;
    param_3[2] = uStack_30;
  }
  return iVar1;
}
