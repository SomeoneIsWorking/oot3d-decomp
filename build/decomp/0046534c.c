// OoT3D decomp @ 0046534c  name=FUN_0046534c  size=232

void FUN_0046534c(void)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  float fVar4;

  pcVar1 = DAT_00465434;
  if (*(int *)(DAT_00465434 + 0xc) != 0) {
    iVar2 = *(int *)(DAT_00465434 + 0xc) + -1;
    *(int *)(DAT_00465434 + 0xc) = iVar2;
    if (iVar2 == 0) {
      fVar4 = *(float *)(pcVar1 + 0x14);
    }
    else {
      fVar4 = *(float *)(pcVar1 + 0x10) - *(float *)(pcVar1 + 8);
    }
    *(float *)(pcVar1 + 0x10) = fVar4;
    uVar3 = FUN_0030f0ec();
    FUN_0030f0c0(uVar3,0x4000000);
    FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    uVar3 = FUN_0030f0ec();
    FUN_0030f0c0(uVar3,0x4000001);
    FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    uVar3 = FUN_0030f0ec();
    FUN_0030f0c0(uVar3,0x4000002);
    FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    uVar3 = FUN_0030f0ec();
    FUN_0030f0c0(uVar3,0x4000003);
    FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    uVar3 = FUN_0030f0ec();
    FUN_0030f0c0(uVar3,DAT_00465438);
    FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    if (*pcVar1 == '\0') {
      uVar3 = FUN_0030f0ec();
      FUN_0030f0c0(uVar3,DAT_0046543c);
      FUN_002d3d44(*(undefined4 *)(pcVar1 + 0x10));
    }
    if ((*(int *)(pcVar1 + 0xc) == 0) && (pcVar1[1] != '\0')) {
      FUN_002ff314(DAT_00465440,0x1e,0);
      return;
    }
  }
  return;
}
