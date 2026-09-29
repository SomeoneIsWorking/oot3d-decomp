// OoT3D decomp @ 00196554  name=FUN_00196554  size=332

void FUN_00196554(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;

  if (*(char *)(param_1 + 0x231) == '\0') {
    uVar3 = FUN_003731e0(param_1 + 0x1a4);
    *(undefined1 *)(param_1 + 0x231) = uVar3;
    bVar4 = FUN_00370378(param_1 + 0xbc,0,0x800);
    *(byte *)(param_1 + 0x231) = bVar4 & *(byte *)(param_1 + 0x231);
    bVar4 = FUN_00370378(param_1 + 0xbe,
                         (int)(short)(*(short *)(param_1 + 0x16) +
                                     (ushort)*(byte *)(param_1 + 0x230) * 0x1000),0x800);
    *(byte *)(param_1 + 0x231) = bVar4 & *(byte *)(param_1 + 0x231);
    bVar4 = FUN_00370378(param_1 + 0x23c,0,0x800);
    *(byte *)(param_1 + 0x231) = bVar4 & *(byte *)(param_1 + 0x231);
    bVar4 = FUN_00370378(param_1 + 0xc0,(int)(short)((ushort)*(byte *)(param_1 + 0x230) * 0x2800),
                         0x800);
    *(byte *)(param_1 + 0x231) = bVar4 & *(byte *)(param_1 + 0x231);
    bVar4 = FUN_00372aa8(param_1 + 0x23a,0xfffff254);
    bVar4 = bVar4 & *(byte *)(param_1 + 0x231);
    uVar5 = (uint)*(byte *)(param_1 + 0x231);
    if (bVar4 != 0) {
      uVar5 = DAT_001966a0;
    }
    *(byte *)(param_1 + 0x231) = bVar4;
    if (bVar4 != 0) {
      *(undefined2 *)(uVar5 + param_1) = 0;
    }
  }
  else if ((*(byte *)(param_1 + 0xefc) & 2) != 0) {
    *(byte *)(param_1 + 0xefc) = *(byte *)(param_1 + 0xefc) & 0xfc;
    uVar2 = DAT_001966ac;
    uVar1 = DAT_001966a8;
    *(byte *)(*(int *)(param_1 + 0x128) + 0xefc) =
         *(byte *)(*(int *)(param_1 + 0x128) + 0xefc) & 0xfc;
    *(byte *)(*(int *)(DAT_001966a4 + 0x30) + 0xefc) =
         *(byte *)(*(int *)(DAT_001966a4 + 0x30) + 0xefc) & 0xfc;
    FUN_00374bb8(uVar2,uVar1,param_2,param_1,(int)*(short *)(param_1 + 0xbe));
    FUN_0036f59c(*(undefined4 *)(DAT_001966b0 + param_2),DAT_001966b4);
    return;
  }
  return;
}
