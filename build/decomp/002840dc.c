// OoT3D decomp @ 002840dc  name=FUN_002840dc  size=396

void FUN_002840dc(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;

  FUN_003510b0(param_1,DAT_00284268);
  uVar1 = DAT_00284270;
  uVar3 = DAT_0028426c;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  FUN_00372d4c(DAT_00284274,uVar3,param_1 + 0xbc,uVar1);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_00284278 + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  uVar3 = ObjectBankArchive_00358ef8(iVar2 + 0x10,0);
  FUN_00353e78(iVar2 + 0x10,param_2,param_1 + 0x1a4,uVar3,*(undefined4 *)(param_1 + 0x178),0,
               param_1 + 0x228,param_1 + 0x3fc,9);
  iVar2 = 0;
  do {
    FUN_00372f38(param_1,param_2,param_1 + iVar2 * 0x3c + 0x70c,1,0);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 5);
  *(short *)(param_1 + 0x61e) = *(short *)(param_1 + 0x1c);
  if (*(short *)(param_1 + 0x1c) < 0) {
    *(undefined2 *)(param_1 + 0x61e) = 0;
  }
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0x67c,param_1,DAT_0028427c);
  uVar3 = DAT_00284280;
  if (*(short *)(param_1 + 0x61e) == 0) {
    FUN_0037572c(DAT_00284280,param_1);
  }
  else {
    *(undefined1 *)(param_1 + 0xb6) = 0xff;
    FUN_0037572c(uVar3,param_1);
  }
  *(undefined4 *)(param_1 + 0x65c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x660) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x664) = *(undefined4 *)(param_1 + 0x30);
  uVar3 = DAT_00284284;
  *(undefined4 *)(param_1 + 0x668) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x66c) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x670) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(param_1 + 0x5d0) = uVar3;
  return;
}
