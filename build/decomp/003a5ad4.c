// OoT3D decomp @ 003a5ad4  name=FUN_003a5ad4  size=76

uint FUN_003a5ad4(int param_1,uint param_2)

{
  int iVar1;
  byte *pbVar2;
  uint uVar4;
  byte *pbVar3;

  if (*(ushort *)(param_1 + 0x1c) != 0) {
    return (uint)*(ushort *)(param_1 + 0x1c);
  }
  iVar1 = FUN_00374be8(param_2,2);
  uVar4 = *(uint *)(param_1 + 0x1a4);
  pbVar2 = (byte *)(param_2 + 0xae8);
  pbVar3 = (byte *)(param_2 + 0xae8);
  if (iVar1 != 0) {
    if (uVar4 < 0x32) {
      *(ushort *)(pbVar3 + uVar4 * 2 + 0x151c) = *(ushort *)(pbVar3 + uVar4 * 2 + 0x151c) | 4;
      param_2 = *pbVar3 | 1;
      *pbVar3 = (byte)param_2;
    }
    return param_2;
  }
  if (uVar4 < 0x32) {
    *(ushort *)(pbVar2 + uVar4 * 2 + 0x151c) = *(ushort *)(pbVar2 + uVar4 * 2 + 0x151c) & 0xfffb;
    param_2 = *pbVar2 | 1;
    *pbVar2 = (byte)param_2;
  }
  return param_2;
}
