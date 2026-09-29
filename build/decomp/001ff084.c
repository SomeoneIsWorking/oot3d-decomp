// OoT3D decomp @ 001ff084  name=FUN_001ff084  size=96

bool FUN_001ff084(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = DAT_001ff0e4 + param_1;
  uVar4 = uVar3;
  if (0x54 < uVar3) {
    uVar4 = 0;
  }
  uVar1 = 0;
  if ((*(byte *)(DAT_001ff0e8 + uVar4) & 2) == 0) {
    if (0x54 < uVar3) {
      uVar3 = 0;
    }
    if ((*(byte *)(DAT_001ff0e8 + uVar3) & 4) == 0) goto code_r0x001ff0d0;
  }
  uVar1 = 1;
code_r0x001ff0d0:
  iVar2 = FUN_00366684(uVar1);
  return iVar2 == param_1;
}
