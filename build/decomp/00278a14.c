// OoT3D decomp @ 00278a14  name=FUN_00278a14  size=268

/* WARNING: Removing unreachable block (ram,0x00278ad8) */
/* WARNING: Removing unreachable block (ram,0x00278adc) */
/* WARNING: Removing unreachable block (ram,0x00278ae0) */

void FUN_00278a14(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;

  FUN_00372f38(param_1,param_2,param_1 + 0x230,5);
  uVar2 = FUN_00353fd4(param_1,param_2,1);
  FUN_003532e8(param_1,0);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  FUN_00350eb8(param_2,param_1 + 0x1c0);
  FUN_00350d48(param_2,param_1 + 0x1c0,param_1,uRam00278ad8);
  iVar3 = FUN_0036e864(param_2,*(ushort *)(param_1 + 0x1c) & 0x3f);
  iVar1 = DAT_003510ec;
  puVar5 = puRam00278adc;
  if (iVar3 == 0) {
    do {
      (**(code **)(iVar1 + (*puVar5 & 0x1e) * 2))(param_1,puVar5);
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
    } while ((uVar4 & 1) != 0);
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
