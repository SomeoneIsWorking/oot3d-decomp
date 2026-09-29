// OoT3D decomp @ 00216360  name=FUN_00216360  size=520

void FUN_00216360(int param_1,int param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  FUN_0037572c(DAT_00216568);
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  iVar2 = *(int *)(param_2 + *(short *)(param_2 + 0xa64) * 4 + 0xa54);
  uVar4 = *(undefined4 *)(iVar2 + 0x90);
  uVar5 = *(undefined4 *)(iVar2 + 0x94);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x8c);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  *(undefined4 *)(param_1 + 0x30) = uVar5;
  puVar1 = DAT_00216570;
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar4 = 0x32;
    uVar5 = 0x1d;
  }
  else {
    uVar4 = 0x31;
    uVar5 = 0x1c;
  }
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0021656c + iVar2) != 0)
     ) {
    iVar2 = iVar2 + 0x3a5c;
  }
  else {
    iVar2 = 0;
  }
  if (((*DAT_00216570 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00216570), iVar3 != 0)) {
    FUN_0036788c(DAT_00216574);
  }
  *(undefined4 *)(*(int *)(DAT_00216574 + 0x17c) + 8) = *(undefined4 *)(param_1 + 0x178);
  uVar4 = ObjectBankArchive_00358ef8(iVar2 + 0x10,uVar4);
  *(undefined4 *)(param_1 + 0x1ac) = uVar4;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00216570), iVar3 != 0)) {
    FUN_0036788c(DAT_00216574);
  }
  iVar3 = (**(code **)(**(int **)(DAT_00216574 + 0x17c) + 8))
                    (*(int **)(DAT_00216574 + 0x17c),*(undefined4 *)(param_1 + 0x1ac),1);
  *(int *)(param_1 + 0x1a8) = iVar3;
  *(undefined1 *)(iVar3 + 0xad) = 0;
  if (((*puVar1 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_00216570), iVar3 != 0)) {
    FUN_0036788c(DAT_00216574);
  }
  *(undefined4 *)(*(int *)(DAT_00216574 + 0x17c) + 8) = 0;
  uVar4 = FUN_00372f0c(iVar2 + 0x10,uVar5);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0xc),uVar4);
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0xc) + 0x10) = 1;
  FUN_0047d548(*(undefined4 *)(param_1 + 0x1a8),2);
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar4 = FUN_0036c5bc(param_2,0xffffffff);
  FUN_00367c54();
  FUN_00367c60(*(undefined4 *)(param_2 + 0x1b0),uVar4);
  *(undefined4 *)(param_1 + 0x1b0) = uVar4;
  return;
}
