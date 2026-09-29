// OoT3D decomp @ 004611e8  name=FUN_004611e8  size=300

void FUN_004611e8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined1 auStack_44 [48];

  uVar1 = DAT_00461318;
  if (*(int *)(param_1 + 0x890) == 2) {
    if (((*DAT_00461314 & 1) == 0) &&
       (iVar4 = FUN_003679b4(DAT_00461314), puVar3 = DAT_00461320, uVar2 = DAT_0046131c, iVar4 != 0)
       ) {
      *DAT_00461320 = DAT_0046131c;
      puVar3[1] = uVar1;
      puVar3[2] = uVar1;
      puVar3[3] = uVar1;
      puVar3[4] = uVar1;
      puVar3[5] = uVar2;
      puVar3[6] = uVar1;
      puVar3[7] = uVar1;
      puVar3[8] = uVar1;
      puVar3[9] = uVar1;
      puVar3[10] = uVar2;
      puVar3[0xb] = uVar1;
    }
    FUN_00372224(auStack_44,DAT_00461320);
    iVar4 = 0;
    local_50 = uVar1;
    local_4c = uVar1;
    local_48 = uVar1;
    do {
      piVar5 = *(int **)(param_1 + iVar4 * 4 + 0x9e4);
      (**(code **)(*piVar5 + 8))(piVar5,auStack_44,auStack_44,&local_50);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 2);
    (**(code **)(**(int **)(param_1 + 0x9e8) + 0xc))();
    (**(code **)(**(int **)(param_1 + 0x9e4) + 0xc))();
  }
  return;
}
