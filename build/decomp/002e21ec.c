// OoT3D decomp @ 002e21ec  name=FUN_002e21ec  size=320

undefined4 FUN_002e21ec(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  uint uVar2;
  uint *puVar3;

  iVar1 = FUN_002e1ef0();
  if (iVar1 == 0) {
    return 0;
  }
  puVar3 = *(uint **)(param_1 + (uint)*(ushort *)(DAT_002e232c + param_1) * 4 + 0x10a0);
  if ((*param_3 & 1) != 0) {
    *(ushort *)((int)puVar3 + param_2 * 0x34 + 0x56) = param_3[1];
  }
  if ((*param_3 & 4) != 0) {
    iVar1 = param_2 * 0x34;
    *(ushort *)((int)puVar3 + iVar1 + 0x5a) = param_3[3];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1c) = param_3[0xe];
    *(ushort *)((int)puVar3 + iVar1 + 0x72) = param_3[0xf];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1d) = param_3[0x10];
    *(ushort *)((int)puVar3 + iVar1 + 0x76) = param_3[0x11];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1e) = param_3[0x12];
    *(ushort *)((int)puVar3 + iVar1 + 0x7a) = param_3[0x13];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x1f) = param_3[0x14];
    *(ushort *)((int)puVar3 + iVar1 + 0x7e) = param_3[0x15];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x20) = param_3[0x16];
    *(ushort *)((int)puVar3 + iVar1 + 0x82) = param_3[0x17];
    *(ushort *)(puVar3 + param_2 * 0xd + 0x21) = param_3[0x18];
    *(ushort *)((int)puVar3 + iVar1 + 0x86) = param_3[0x19];
  }
  if ((*param_3 & 2) != 0) {
    puVar3[param_2 * 0xd + 0x17] = *(uint *)(param_3 + 4);
    puVar3[param_2 * 0xd + 0x18] = *(uint *)(param_3 + 6);
    puVar3[param_2 * 0xd + 0x19] = *(uint *)(param_3 + 8);
    puVar3[param_2 * 0xd + 0x1a] = *(uint *)(param_3 + 10);
    puVar3[param_2 * 0xd + 0x1b] = *(uint *)(param_3 + 0xc);
  }
  *(ushort *)(puVar3 + param_2 * 0xd + 0x15) = (ushort)puVar3[param_2 * 0xd + 0x15] | *param_3;
  if (param_2 == 0) {
    uVar2 = *puVar3 | 0x1000;
  }
  else {
    if (param_2 != 1) {
      return 1;
    }
    uVar2 = *puVar3 | 0x2000;
  }
  *puVar3 = uVar2;
  return 1;
}
