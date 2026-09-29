// OoT3D decomp @ 001c5148  name=FUN_001c5148  size=152

void FUN_001c5148(int param_1)

{
  undefined4 uVar1;
  short sVar2;
  uint in_fpscr;
  float fVar3;

  FUN_003731e0(*(undefined4 *)(param_1 + 0x1334));
  if (*(short *)(param_1 + 0x135e) != 0) {
    sVar2 = *(short *)(param_1 + 0x135e) + -1;
    *(short *)(param_1 + 0x135e) = sVar2;
    fVar3 = (float)FUN_002cfca0((int)(short)(sVar2 * (short)DAT_001c51e0));
    *(short *)(param_1 + 0xc0) = (short)(int)(fVar3 * DAT_001c51e4);
    return;
  }
  *(undefined4 *)(param_1 + 0x1374) = DAT_001c51e8;
  *(undefined2 *)(param_1 + 0x135e) = 6;
  uVar1 = FUN_0036ae14(*(undefined4 *)(param_1 + 0x1334),3);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001c51f4,DAT_001c51f0,uVar1,DAT_001c51ec,*(undefined4 *)(param_1 + 0x1334),3,2);
  return;
}
