// OoT3D decomp @ 004bacc4  name=FUN_004bacc4  size=344

undefined4
FUN_004bacc4(int param_1,int param_2,uint *param_3,uint param_4,uint param_5,undefined2 param_6)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  bool bVar7;
  
  puVar5 = param_3;
  uVar1 = FUN_002e1ef0();
  bVar7 = uVar1 != 0;
  if (bVar7) {
    puVar5 = (uint *)*param_3;
    uVar1 = (int)puVar5 + 0xec000000;
  }
  if (bVar7 && uVar1 < 0x8000000) {
    puVar6 = *(uint **)(param_1 + (*(ushort *)(DAT_004bae1c + param_1) & 1) * 0x60 + param_2 * 4 +
                       0x10b0);
    uVar3 = puVar6[0x2d];
    uVar1 = uVar3 & 0xffff;
    puVar2 = puVar5;
    if ((uVar3 & 0xc) == 0) {
      if ((uVar3 & 3) == 1) {
        puVar2 = (uint *)((int)puVar5 + param_4);
      }
      if ((uVar3 & 3) == 2) {
        puVar2 = (uint *)((int)puVar2 + param_4 * 2);
      }
    }
    if ((uVar1 << 0x1c) >> 0x1e == 1) {
      if ((uVar3 & 3) == 1) {
        puVar2 = (uint *)((int)puVar2 + param_4 * 2);
      }
      if ((uVar3 & 3) == 2) {
        puVar2 = (uint *)((int)puVar2 + param_4 * 4);
      }
    }
    bVar7 = (uVar1 << 0x1c) >> 0x1e == 2;
    if (bVar7) {
      uVar1 = uVar3 & 3;
    }
    if (bVar7 && uVar1 == 1) {
      iVar4 = (int)((longlong)(int)(param_4 + 0xd) * (longlong)DAT_004bae20 +
                    ((ulonglong)(param_4 + 0xd) << 0x20) >> 0x20);
      puVar2 = (uint *)((int)puVar2 + ((iVar4 >> 3) - (iVar4 >> 0x1f)) * 8);
    }
    if ((0x14000000 < puVar2) && (puVar2 < 0x1c000001)) {
      iVar4 = param_5 * 0x14;
      *(undefined2 *)(puVar6 + param_5 * 5 + 0x17) = param_6;
      puVar6[param_5 * 5 + 0x13] = (uint)(puVar5 + 0x3000000) >> 0x10 | (int)puVar5 << 0x10;
      puVar6[param_5 * 5 + 0x14] = param_4 >> 0x10 | param_4 << 0x10;
      if (param_3[2] == 0) {
        *(ushort *)((int)puVar6 + iVar4 + 0x5a) = *(ushort *)((int)puVar6 + iVar4 + 0x5a) & 0xff00;
      }
      else {
        FUN_0035fb94(puVar6 + param_5 * 5 + 0x15);
        *(undefined *)((int)puVar6 + iVar4 + 0x5a) = 1;
      }
      *(ushort *)((int)puVar6 + 0x4a) =
           *(ushort *)((int)puVar6 + 0x4a) | (ushort)(1 << (param_5 & 0xff));
      *(undefined *)((int)puVar6 + iVar4 + 0x5b) = *(undefined *)(param_3 + 4);
      *puVar6 = *puVar6 | 0x80000;
      return 1;
    }
  }
  return 0;
}

