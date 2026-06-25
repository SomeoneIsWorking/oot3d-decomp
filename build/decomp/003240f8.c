// OoT3D decomp @ 003240f8  name=FUN_003240f8  size=48

void FUN_003240f8(int param_1,int param_2)

{
  undefined uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  iVar3 = FUN_00324154(param_2 + 0x3410,param_1);
  iVar2 = DAT_00324150;
  uVar4 = *(undefined4 *)(param_1 + 0x7c);
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  uVar1 = *(undefined *)(param_1 + 0x74);
  *(undefined *)(iVar3 + 0x1c) = 1;
  *(char *)(iVar3 + 8) = (char)*(undefined4 *)(iVar2 + 8);
  *(undefined *)(iVar3 + 9) = uVar1;
  *(undefined4 *)(iVar3 + 0xc) = uVar4;
  *(undefined4 *)(iVar3 + 0x10) = uVar5;
  return;
}

