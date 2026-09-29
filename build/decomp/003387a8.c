// OoT3D decomp @ 003387a8  name=FUN_003387a8  size=176

uint FUN_003387a8(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;

  uVar3 = param_2;
  if (param_2 != 0xffffffff) {
    uVar3 = (uint)*(short *)(param_1 + 400);
  }
  if (param_2 != 0xffffffff && uVar3 != param_2) {
    uVar3 = (int)(short)*(ushort *)(param_1 + 0x192) & 0x40;
    if (uVar3 == 0) {
      sVar1 = FUN_002d064c(*(int *)(param_1 + 0xd4) + 0xa98,param_2,0x32);
      *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 0x40;
      iVar2 = FUN_00338864(param_1,(int)sVar1,5);
      if ((-1 < iVar2) ||
         ((*(uint *)(DAT_00338858 + *(short *)(param_1 + 0x18a) * 8) & 0x80000000) != 0)) {
        *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 4;
        *(short *)(param_1 + 400) = (short)param_2;
        FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 0x18c));
      }
      uVar3 = param_2 | 0x80000000;
    }
  }
  else {
    *(ushort *)(param_1 + 0x192) = *(ushort *)(param_1 + 0x192) | 0x40;
    uVar3 = 0xffffffff;
  }
  return uVar3;
}
