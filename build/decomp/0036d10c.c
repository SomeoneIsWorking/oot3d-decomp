// OoT3D decomp @ 0036d10c  name=FUN_0036d10c  size=80

uint FUN_0036d10c(int param_1,uint param_2)

{
  byte *pbVar1;
  uint uVar3;
  byte *pbVar2;

  (**(code **)(param_1 + 0x1bc))();
  if (0 < *(short *)(param_1 + 0x1c4)) {
    *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + -1;
  }
  uVar3 = *(uint *)(param_1 + 0x1a4);
  pbVar1 = (byte *)(param_2 + 0xae8);
  pbVar2 = (byte *)(param_2 + 0xae8);
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    if (uVar3 < 0x32) {
      *(ushort *)(pbVar1 + uVar3 * 2 + 0x151c) = *(ushort *)(pbVar1 + uVar3 * 2 + 0x151c) | 4;
      param_2 = *pbVar1 | 1;
      *pbVar1 = (byte)param_2;
    }
    return param_2;
  }
  if (uVar3 < 0x32) {
    *(ushort *)(pbVar2 + uVar3 * 2 + 0x151c) = *(ushort *)(pbVar2 + uVar3 * 2 + 0x151c) & 0xfffb;
    param_2 = *pbVar2 | 1;
    *pbVar2 = (byte)param_2;
  }
  return param_2;
}
