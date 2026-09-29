// OoT3D decomp @ 001ec128  name=FUN_001ec128  size=492

void FUN_001ec128(int param_1,int param_2)

{
  undefined4 uVar1;
  uint *puVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;

  FUN_003510b0(param_1,DAT_001ec314);
  uVar1 = DAT_001ec31c;
  uVar4 = DAT_001ec318;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined4 *)(param_1 + 0x1b8) = uVar4;
  *(undefined4 *)(param_1 + 0x1c0) = uVar1;
  FUN_0037572c(DAT_001ec320,param_1);
  uVar4 = DAT_001ec324;
  *(undefined1 *)(param_1 + 0x1a8) = 100;
  *(undefined2 *)(param_1 + 0x1a6) = 0;
  *(undefined4 *)(param_1 + 0x1bc) = uVar4;
  puVar2 = DAT_001ec32c;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001ec328 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  if (((*DAT_001ec32c & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001ec32c), iVar3 != 0)) {
    FUN_0036788c(DAT_001ec330);
  }
  *(undefined4 *)(*(int *)(DAT_001ec330 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001ec32c), iVar3 != 0)) {
    FUN_0036788c(DAT_001ec330);
  }
  piVar5 = *(int **)(DAT_001ec330 + 0x17c);
  uVar4 = ObjectBankArchive_00358ef8(param_2 + 0x10,0x27);
  uVar4 = (**(code **)(*piVar5 + 8))(piVar5,uVar4,1);
  *(undefined4 *)(param_1 + 0x1c4) = uVar4;
  if (((*puVar2 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_001ec32c), iVar3 != 0)) {
    FUN_0036788c(DAT_001ec330);
  }
  *(undefined4 *)(*(int *)(DAT_001ec330 + 0x17c) + 8) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0x1c4) + 0xad) = 0;
  *(undefined4 *)(param_1 + 0x1c8) = *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0xc);
  uVar4 = FUN_00372f0c(param_2 + 0x10,0x18);
  FUN_00372d94(*(undefined4 *)(param_1 + 0x1c8),uVar4);
  uVar4 = DAT_001ec33c;
  *(undefined1 *)(*(int *)(param_1 + 0x1c8) + 0x10) = 1;
  *(undefined4 *)(*(int *)(param_1 + 0x1c8) + 0xc) = uVar4;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1c4),2);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  return;
}
