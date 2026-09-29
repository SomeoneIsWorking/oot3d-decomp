// OoT3D decomp @ 002fff7c  name=FUN_002fff7c  size=240

void FUN_002fff7c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [64];
  undefined1 auStack_90 [64];
  undefined1 auStack_50 [48];

  uVar3 = DAT_00300074;
  uVar2 = DAT_00300070;
  uVar1 = DAT_0030006c;
  local_dc = DAT_00300074;
  local_d8 = DAT_00300074;
  local_d4 = DAT_00300078;
  FUN_003009f0(auStack_50);
  FUN_003008e0(auStack_d0);
  FUN_00300aa8(uVar3,DAT_00300080,DAT_0030007c,uVar3,uVar1,uVar2,auStack_90,1);
  iVar4 = param_1 + 0x7320;
  FUN_0032471c();
  FUN_003246ec(iVar4,auStack_90,auStack_d0);
  FUN_003246bc(iVar4,auStack_d0);
  FUN_002f9c74(iVar4);
  iVar4 = *(int *)(param_1 + 0x743c);
  *(undefined4 *)(iVar4 + 0x3c) = local_dc;
  *(undefined4 *)(iVar4 + 0x40) = local_d8;
  *(undefined4 *)(iVar4 + 0x44) = local_d4;
  (**(code **)(**(int **)(param_1 + 0x743c) + 8))
            (*(int **)(param_1 + 0x743c),auStack_50,auStack_50,&local_dc);
  (**(code **)(**(int **)(param_1 + 0x743c) + 0xc))();
  return;
}
