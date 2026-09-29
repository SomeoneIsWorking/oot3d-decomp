// OoT3D decomp @ 002e2330  name=FUN_002e2330  size=216

undefined4 FUN_002e2330(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  bool bVar5;

  iVar1 = FUN_002e1ef0();
  if (iVar1 == 0) {
    return 0;
  }
  uVar4 = *param_3;
  bVar5 = (uVar4 & 1) != 0;
  if (bVar5) {
    uVar4 = param_3[1];
  }
  puVar2 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e2408 + param_1) * 4 + 0x10a0);
  if (bVar5) {
    *(ushort *)((int)(puVar2 + param_2 * 5 + 1) + 0x2a) = uVar4;
  }
  if ((*param_3 & 4) != 0) {
    iVar1 = param_2 * 0x14;
    *(ushort *)((int)puVar2 + iVar1 + 0x32) = param_3[3];
    *(ushort *)(puVar2 + param_2 * 5 + 0xe) = param_3[6];
    *(ushort *)((int)puVar2 + iVar1 + 0x3a) = param_3[7];
    *(ushort *)(puVar2 + param_2 * 5 + 0xf) = param_3[8];
    *(ushort *)((int)puVar2 + iVar1 + 0x3e) = param_3[9];
  }
  if ((*param_3 & 2) != 0) {
    (puVar2 + param_2 * 5 + 1)[0xc] = *(uint *)(param_3 + 4);
  }
  *(ushort *)(puVar2 + param_2 * 5 + 0xb) = (ushort)puVar2[param_2 * 5 + 0xb] | *param_3;
  if (param_2 == 0) {
    uVar3 = *puVar2 | 0x400;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    uVar3 = *puVar2 | 0x800;
  }
  *puVar2 = uVar3;
  return 1;
}
