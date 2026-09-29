// OoT3D decomp @ 0044b3d0  name=FUN_0044b3d0  size=156

void FUN_0044b3d0(int param_1,char *param_2)

{
  uint uVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  uVar1 = FUN_0030de24(param_2);
  uVar5 = 0;
  uVar6 = uVar1;
  if (0xfe < uVar1) {
    uVar6 = 0xff;
  }
  pcVar2 = (char *)(param_1 + 8);
  pcVar3 = pcVar2;
  pcVar7 = param_2;
  if (uVar6 != 0) {
    do {
      pcVar2 = pcVar3 + 1;
      *pcVar3 = *pcVar7;
      pcVar7 = pcVar7 + 1;
      uVar5 = uVar5 + 1;
      if (*pcVar7 == '\0') break;
      uVar6 = uVar1;
      if (0xfe < uVar1) {
        uVar6 = 0xff;
      }
      pcVar3 = pcVar2;
    } while (uVar5 < uVar6);
  }
  *pcVar2 = '\0';
  if (param_2[uVar1 - 1] != '/') {
    iVar4 = param_1 + uVar1;
    uVar1 = uVar1 + 1;
    *(undefined1 *)(iVar4 + 8) = 0x2f;
  }
  *(undefined1 *)(uVar1 + param_1 + 8) = 0;
  return;
}
