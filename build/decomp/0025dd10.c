// OoT3D decomp @ 0025dd10  name=FUN_0025dd10  size=268

/* WARNING: Removing unreachable block (ram,0x0025dd48) */

void FUN_0025dd10(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 *puVar5;

  puVar5 = (undefined4 *)(param_1 + 0x4624);
  *(ushort *)(param_1 + 0xd2c) = (ushort)*(byte *)(DAT_0025de1c + param_2);
  iVar2 = 0;
  do {
    iVar3 = iVar2 + 1;
    *(undefined1 *)(puVar5 + iVar2 * 2 + 1) = 0;
    *(undefined1 *)((int)puVar5 + iVar2 * 8 + 5) = 0;
    puVar5[iVar2 * 2 + 2] = 0;
    iVar2 = iVar3;
  } while (iVar3 < 0x50);
  *puVar5 = 0;
  *(float *)(param_1 + 0xd4c) = *(float *)(param_1 + 0x2c) + DAT_0025de20;
  *(float *)(param_1 + 0xd50) = *(float *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  uVar4 = FUN_00372f38(param_1,param_2,param_1 + 0x4620,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a8,0,8,param_1 + 0x22c,param_1 + 0x7a8,0x1b);
  FUN_0035c358(param_1 + 0x48a8,param_1 + 0x1a8,0,1,0xffffffff);
  uVar1 = DAT_0025de24;
  *puVar5 = uVar4;
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  return;
}
