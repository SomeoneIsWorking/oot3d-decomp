// OoT3D decomp @ 00220868  name=FUN_00220868  size=492

void FUN_00220868(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;

  FUN_003510b0(param_1,DAT_00220a54);
  uVar1 = DAT_00220a5c;
  uVar4 = DAT_00220a58;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  *(undefined4 *)(param_1 + 0x1c0) = uVar1;
  FUN_0037572c(DAT_00220a60,param_1);
  uVar4 = DAT_00220a64;
  *(undefined1 *)(param_1 + 0x1a8) = 0x82;
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  puVar2 = DAT_00220a6c;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_00220a68 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_00220a6c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00220a6c), iVar3 != 0)) {
    FUN_0036788c(DAT_00220a70);
  }
  *(undefined4 *)(*(int *)(DAT_00220a70 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00220a6c), iVar3 != 0)) {
    FUN_0036788c(DAT_00220a70);
  }
  piVar5 = *(int **)(DAT_00220a70 + 0x17c);
  uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,0x28);
  uVar4 = (**(code **)(*piVar5 + 8))(piVar5,uVar4,1);
  *(undefined4 *)(param_1 + 0x1c4) = uVar4;
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00220a6c), iVar3 != 0)) {
    FUN_0036788c(DAT_00220a70);
  }
  *(undefined4 *)(*(int *)(DAT_00220a70 + 0x17c) + 8) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xad) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc);
  uVar4 = FUN_00372f0c(param_2 + 0x10,0x19);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x1c8),uVar4);
  uVar4 = DAT_00220a7c;
  *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0xc) = uVar4;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1c4),2);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}
