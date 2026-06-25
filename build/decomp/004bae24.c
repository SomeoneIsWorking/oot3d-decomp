// OoT3D decomp @ 004bae24  name=FUN_004bae24  size=380

undefined4
FUN_004bae24(int param_1,int param_2,uint *param_3,uint param_4,uint param_5,undefined2 param_6)

{
  ushort uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  
  puVar5 = param_3;
  uVar2 = FUN_002e1ef0();
  bVar6 = uVar2 != 0;
  if (bVar6) {
    puVar5 = (uint *)*param_3;
    uVar2 = (int)puVar5 + 0xec000000;
  }
  if (bVar6 && uVar2 < 0x8000000) {
    uVar2 = param_5 & 0xffff;
    puVar3 = puVar5;
    if ((param_5 & 0xc) == 0) {
      if ((param_5 & 3) == 1) {
        puVar3 = (uint *)((int)puVar5 + param_4);
      }
      if ((param_5 & 3) == 2) {
        puVar3 = (uint *)((int)puVar3 + param_4 * 2);
      }
    }
    if ((uVar2 << 0x1c) >> 0x1e == 1) {
      if ((param_5 & 3) == 1) {
        puVar3 = (uint *)((int)puVar3 + param_4 * 2);
      }
      if ((param_5 & 3) == 2) {
        puVar3 = (uint *)((int)puVar3 + param_4 * 4);
      }
    }
    bVar6 = (uVar2 << 0x1c) >> 0x1e == 2;
    if (bVar6) {
      uVar2 = param_5 & 3;
    }
    if (bVar6 && uVar2 == 1) {
      iVar4 = (int)((longlong)(int)(param_4 + 0xd) * (longlong)DAT_004bafa0 +
                    ((ulonglong)(param_4 + 0xd) << 0x20) >> 0x20);
      puVar3 = (uint *)((int)puVar3 + ((iVar4 >> 3) - (iVar4 >> 0x1f)) * 8);
    }
    if ((0x14000000 < puVar3) && (puVar3 < 0x1c000001)) {
      puVar3 = *(uint **)(param_1 + (*(ushort *)(DAT_004bafa4 + param_1) & 1) * 0x60 + param_2 * 4 +
                         0x10b0);
      *(undefined2 *)((int)puVar3 + 0xbe) = param_6;
      puVar3[0x2c] = param_4 >> 0x10 | param_4 << 0x10;
      puVar3[0x2b] = (uint)(puVar5 + 0x3000000) >> 0x10 | (int)puVar5 << 0x10;
      *(short *)(puVar3 + 0x2d) = (short)param_5;
      *(ushort *)(puVar3 + 0x2f) =
           (ushort)((int)*(char *)(param_3 + 4) << 1) & 2 | *(ushort *)(puVar3 + 0x2f) & 0xfffd;
      if ((param_5 << 0x1c) >> 0x1e == 2) {
        if ((param_3[2] == 0) || (FUN_0035fb94((int)puVar3 + 0xb6), param_3[2] == 0)) {
          uVar1 = *(ushort *)(puVar3 + 0x2f) & 0xfffe;
        }
        else {
          uVar1 = *(ushort *)(puVar3 + 0x2f) | 1;
        }
        *(ushort *)(puVar3 + 0x2f) = uVar1;
      }
      puVar3[0x29] = 0;
      *puVar3 = *puVar3 | 0x40200000;
      return 1;
    }
  }
  return 0;
}

