// OoT3D decomp @ 00163420  name=FUN_00163420  size=276

void FUN_00163420(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  uVar1 = DAT_0016353c;
  FUN_00372d4c(DAT_0016353c,DAT_00163534,param_1 + 0xbc,DAT_00163538);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00163540 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  FUN_00372f38(param_1,param_2,param_1 + 0x448,0,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x32c,5);
  FUN_00373d40(param_1 + 0x1a4,0);
  uVar3 = DAT_00163544;
  *(undefined1 *)(param_1 + 0xb6) = 0xff;
  FUN_0037572c(uVar3,param_1);
  *(undefined4 *)(param_1 + 0x444) = DAT_00163548;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined2 *)(param_1 + 0x440) = 0;
  *(undefined4 *)(param_1 + 0x43c) = uVar1;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
