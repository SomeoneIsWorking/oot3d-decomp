// OoT3D decomp @ 00428ad0  name=FUN_00428ad0  size=436

void FUN_00428ad0(void)

{
  undefined2 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char local_18 [4];
  ushort local_14 [2];
  ushort local_10 [2];

  puVar1 = DAT_00428c84;
  if (*(int *)(DAT_00428c84 + 6) != 0) {
    FUN_002f9484(local_10,local_14,local_18);
    iVar3 = *(int *)(puVar1 + 6);
    if (iVar3 == 1) {
      if (local_18[0] == '\0') {
        uVar4 = 2;
LAB_00428b80:
        *(undefined4 *)(puVar1 + 6) = uVar4;
        return;
      }
    }
    else if (iVar3 == 2) {
      if ((local_18[0] != '\0') && (iVar3 = FUN_0043f734(), iVar3 != 0)) {
        *(uint *)(puVar1 + 0x10) = (uint)local_10[0];
        *(uint *)(puVar1 + 0x12) = (uint)local_14[0];
        uVar4 = 3;
        goto LAB_00428b80;
      }
      iVar3 = FUN_0033f428(100,0,0x40,0x28,0);
      if (iVar3 != 0) {
        *(undefined4 *)(puVar1 + 10) = *(undefined4 *)(puVar1 + 0x1a);
        *(undefined4 *)(puVar1 + 0xc) = *(undefined4 *)(puVar1 + 0x1c);
        *puVar1 = puVar1[1];
        puVar2 = DAT_00428c88;
        *(undefined4 *)(puVar1 + 0xe) = *(undefined4 *)(puVar1 + 0x1e);
        puVar2[-3] = *puVar2;
        puVar2[-2] = puVar2[1];
        puVar2[-1] = puVar2[2];
        puVar2[3] = puVar2[6];
        puVar2[4] = puVar2[7];
        puVar2[5] = puVar2[8];
        FUN_002f43d8(0);
        *(undefined4 *)(puVar1 + 0x18) = 0;
        *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) & 0xffffffef;
      }
      iVar3 = FUN_0033f428(0,0,0x46,0x28,0);
      if (iVar3 != 0) {
        *(undefined4 *)(puVar1 + 6) = 0;
        FUN_002f87ec(0);
        FUN_002f43d8(0);
        *(undefined4 *)(puVar1 + 0x18) = 0;
        *(uint *)(puVar1 + 8) = *(uint *)(puVar1 + 8) & 0xffffffef;
        return;
      }
    }
    else if (iVar3 == 3) {
      if (local_18[0] == '\0') {
        *(undefined4 *)(puVar1 + 6) = 1;
      }
      else {
        FUN_0043f990(local_10[0],local_14[0]);
      }
    }
  }
  return;
}
