// OoT3D decomp @ 001eb30c  name=FUN_001eb30c  size=104

void FUN_001eb30c(int param_1)

{
  ushort uVar1;
  int iVar2;
  undefined4 uVar3;
  uint in_fpscr;

  iVar2 = FUN_003731e0(*(undefined4 *)(param_1 + 0x1334));
  if (iVar2 == 0) {
    uVar1 = *(ushort *)(param_1 + 0x135c) & 0xfffe;
  }
  else {
    uVar3 = FUN_0036ae14(*(int *)(param_1 + 0x1334),
                         *(undefined4 *)(*(int *)(param_1 + 0x1334) + 0x30));
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_001eb378,DAT_001eb374,uVar3,DAT_001eb374,*(int *)(param_1 + 0x1334),
                 *(undefined4 *)(*(int *)(param_1 + 0x1334) + 0x30),2);
    uVar1 = *(ushort *)(param_1 + 0x135c) | 1;
  }
  *(ushort *)(param_1 + 0x135c) = uVar1;
  return;
}
