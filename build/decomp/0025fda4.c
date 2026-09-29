// OoT3D decomp @ 0025fda4  name=FUN_0025fda4  size=216

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0025fda4(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;

  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0);
  iVar1 = DAT_0025fe7c;
  uVar4 = 0;
  do {
    iVar3 = (**(code **)(iVar1 + uVar4 * 4))(param_1,param_2);
    iVar2 = DAT_003510ec;
    if (iVar3 == 0) {
      *(undefined4 *)(param_1 + 0x140) = 0;
      *(undefined4 *)(param_1 + 0x13c) = 0;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
      return;
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 < 3);
  puVar5 = DAT_0025fe80;
  if (*(short *)(param_1 + 0x1c) == 3) {
    do {
      (**(code **)(iVar2 + (*puVar5 & 0x1e) * 2))(param_1,puVar5);
      uVar4 = *puVar5;
      puVar5 = puVar5 + 1;
    } while ((uVar4 & 1) != 0);
    return;
  }
  FUN_003510b0(param_1,DAT_0025fe84);
  return;
}
