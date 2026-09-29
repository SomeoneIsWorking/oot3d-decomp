// OoT3D decomp @ 002096b4  name=FUN_002096b4  size=492

void FUN_002096b4(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;

  FUN_003510b0(param_1,DAT_002098a0);
  uVar1 = DAT_002098a8;
  uVar4 = DAT_002098a4;
  *(undefined2 *)(param_1 + 0x1bc) = 0;
  *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  *(undefined4 *)(param_1 + 0x1b8) = uVar1;
  FUN_0037572c(DAT_002098ac,param_1);
  uVar4 = DAT_002098b0;
  *(undefined1 *)(param_1 + 0x1c0) = 0xa0;
  *(undefined2 *)(param_1 + 0x1be) = 0;
  *(undefined4 *)(param_1 + 0x1b4) = uVar4;
  puVar2 = DAT_002098b8;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_002098b4 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_002098b8 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002098b8), iVar3 != 0)) {
    FUN_0036788c(DAT_002098bc);
  }
  *(undefined4 *)(*(int *)(DAT_002098bc + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002098b8), iVar3 != 0)) {
    FUN_0036788c(DAT_002098bc);
  }
  piVar5 = *(int **)(DAT_002098bc + 0x17c);
  uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,0x26);
  uVar4 = (**(code **)(*piVar5 + 8))(piVar5,uVar4,1);
  *(undefined4 *)(param_1 + 0x1c4) = uVar4;
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_002098b8), iVar3 != 0)) {
    FUN_0036788c(DAT_002098bc);
  }
  *(undefined4 *)(*(int *)(DAT_002098bc + 0x17c) + 8) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xad) = 0;
  uVar4 = FUN_00372f0c(param_2 + 0x10,0x17);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc),uVar4);
  uVar4 = DAT_002098c8;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0x10) = 1;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x1c4) + 0xc) + 0xc) = uVar4;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1c4),2);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}
