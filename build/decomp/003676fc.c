// OoT3D decomp @ 003676fc  name=FUN_003676fc  size=124

bool FUN_003676fc(int param_1)

{
  uint uVar1;
  bool bVar2;

  if ((*(ushort *)(param_1 + 0x1c) & 0x1f) == 2) {
    bVar2 = (*(byte *)(param_1 + 0xbfb) & 1) != 0;
    if (bVar2) {
      uVar1 = *(uint *)(param_1 + 4) | 1;
    }
    else {
      uVar1 = *(uint *)(param_1 + 4) & 0xfffffffe;
    }
    *(uint *)(param_1 + 4) = uVar1;
    return bVar2;
  }
  bVar2 = DAT_00367778 * DAT_00367778 <= *(float *)(param_1 + 0x94);
  if (!bVar2 || *(float *)(param_1 + 0x94) == DAT_00367778 * DAT_00367778) {
    bVar2 = DAT_00367780 <= ABS(*(float *)(param_1 + 0x9c));
  }
  if (bVar2) {
    return false;
  }
  return true;
}
