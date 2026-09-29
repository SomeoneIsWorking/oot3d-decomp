// OoT3D decomp @ 00120460  name=FUN_00120460  size=200

void FUN_00120460(float param_1,int param_2,undefined4 param_3)

{
  ushort uVar1;
  float fVar2;
  int iVar3;
  bool bVar4;
  float extraout_s0;

  if ((*(char *)(param_2 + 0xdf3) != '\x01') ||
     (iVar3 = FUN_00364670(param_2,param_2 + 0xdfc,param_3,1,0), param_1 = extraout_s0, iVar3 != 0))
  {
    fVar2 = DAT_00120528;
    if (*(byte *)(param_2 + 0xdf3) != 0) {
      *(byte *)(param_2 + 0xdf3) = *(byte *)(param_2 + 0xdf3) | 2;
    }
    if ((*(ushort *)(param_2 + 0x90) & 2) != 0) {
      *(float *)(param_2 + 0x6c) = fVar2;
    }
    bVar4 = true;
    if ((*(ushort *)(param_2 + 0x90) & 1) != 0) {
      param_1 = *(float *)(param_2 + 0x6c);
      bVar4 = fVar2 <= param_1;
    }
    if (!bVar4) {
      *(float *)(param_2 + 0x6c) = param_1 + DAT_0012052c;
    }
    FUN_00375a18(param_2 + 0xbe,(int)*(short *)(param_2 + 0x92),1,DAT_00120530);
    iVar3 = FUN_003731e0(param_2 + 0x1a4);
    uVar1 = 0;
    if (iVar3 != 0) {
      uVar1 = *(ushort *)(param_2 + 0x90);
    }
    if (iVar3 != 0 && (uVar1 & 1) != 0) {
      FUN_00366318(param_2);
      return;
    }
  }
  return;
}
