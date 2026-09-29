// OoT3D decomp @ 003145d0  name=FUN_003145d0  size=152

void FUN_003145d0(int *param_1,undefined2 param_2,undefined2 param_3,undefined2 param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;

  iVar2 = FUN_00308200(0,param_2);
  iVar3 = FUN_00308200(1,param_3);
  iVar4 = FUN_00308200(2,param_4);
  uVar1 = DAT_00314668;
  uVar6 = (uint)(iVar2 != 5) | (uint)(iVar3 != 0) << 1 | (uint)(iVar4 != 0) << 2 | 0x11000;
  puVar5 = *(uint **)(*param_1 + 8);
  *puVar5 = uVar6;
  puVar5[1] = uVar1;
  puVar5[2] = uVar6;
  puVar5[3] = uVar1 + 0x10000;
  puVar5[4] = uVar6;
  puVar5[5] = uVar1 - 0x20000;
  *(uint **)(*param_1 + 8) = puVar5 + 6;
  return;
}
