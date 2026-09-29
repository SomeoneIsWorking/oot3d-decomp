// OoT3D decomp @ 00168a90  name=FUN_00168a90  size=384

void FUN_00168a90(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;

  FUN_00353dd0(param_2,param_1 + 0x1a8);
  FUN_00353d24(param_2,param_1 + 0x1a8,param_1,DAT_00168c10);
  FUN_00350318(param_1 + 0xa0,0,DAT_00168c14);
  FUN_0037572c(DAT_00168c18,param_1);
  uVar2 = DAT_00168c20;
  *(undefined4 *)(param_1 + 0xc4) = DAT_00168c1c;
  *(undefined1 *)(param_1 + 0x200) = 0;
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00168c24 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  param_2 = param_2 + 0x10;
  if (((*DAT_00168c28 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00168c28), iVar1 != 0)) {
    FUN_0036788c(DAT_00168c2c);
  }
  piVar3 = *(int **)(DAT_00168c2c + 0x17c);
  piVar3[2] = *(int *)(param_1 + 0x178);
  uVar2 = ObjectBankArchive_00358ef8(param_2,2);
  uVar2 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,1);
  *(undefined4 *)(param_1 + 0x204) = uVar2;
  uVar2 = ObjectBankArchive_00358ef8(param_2,3);
  uVar2 = (**(code **)(*piVar3 + 8))(piVar3,uVar2,1);
  *(undefined4 *)(param_1 + 0x208) = uVar2;
  piVar3[2] = 0;
  *(undefined4 *)(param_1 + 0x20c) = *(undefined4 *)(*(int *)(param_1 + 0x208) + 0xc);
  uVar2 = FUN_00372f0c(param_2,0);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x20c),uVar2);
  *(undefined4 *)(*(int *)(param_1 + 0x20c) + 0xc) = DAT_00168c38;
  *(undefined1 *)(*(int *)(param_1 + 0x20c) + 0x10) = 1;
  return;
}
