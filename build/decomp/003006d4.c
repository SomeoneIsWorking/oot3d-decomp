// OoT3D decomp @ 003006d4  name=FUN_003006d4  size=472

void FUN_003006d4(int param_1,int param_2)

{
  float fVar1;
  uint *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint in_fpscr;
  float fVar7;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  float local_18;

  if (*(char *)(param_1 + 4) != '\0') {
    FUN_00498764(param_1 + 8);
    if ((*(char *)(param_1 + 0xc) != '\0') && (*(char *)(param_1 + 0xc) == '\x04')) {
      uVar4 = FUN_00495964(param_1 + 8);
      iVar5 = *(int *)(param_1 + 0x10);
      if (iVar5 - 0xb5U < 9) {
        iVar5 = 0xb5;
      }
      uVar6 = *(int *)(param_1 + iVar5 * 0x10 + 0x3c) - 0xf;
      if ((uVar6 <= uVar4) && (*(uint *)(param_1 + 0x1708) < uVar6)) {
        local_24 = DAT_003008ac;
        FUN_0037547c(DAT_003008b4,0,4,DAT_003008b0,DAT_003008b0);
      }
      *(uint *)(param_1 + 0x1708) = uVar4;
    }
    local_24 = DAT_003008c0;
    fVar1 = DAT_003008b8;
    if (0 < *(int *)(param_1 + 0x170c)) {
      iVar5 = *(int *)(param_1 + 0x170c) + -1;
      *(int *)(param_1 + 0x170c) = iVar5;
      puVar2 = DAT_003008c4;
      fVar7 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      local_18 = DAT_003008bc - fVar7 * fVar1;
      local_20 = local_24;
      local_1c = local_24;
      if (((*DAT_003008c4 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_003008c4), iVar5 != 0)) {
        FUN_0036788c(DAT_003008c8);
      }
      uVar3 = DAT_003008d4;
      FUN_003339e8(DAT_003008d4,4,&local_24,0);
      if (((*puVar2 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_003008c4), iVar5 != 0)) {
        FUN_0036788c(DAT_003008c8);
      }
      FUN_003339e8(uVar3,6,&local_24,0);
      iVar5 = DAT_003008d8;
      if (*(int *)(param_1 + 0x170c) < 1) {
        *(undefined4 *)(param_1 + 0x170c) = 0;
        *(undefined4 *)(iVar5 + 0x558) = 0xff;
        *(undefined1 *)(iVar5 + 0x56e) = 0xff;
        uVar3 = DAT_003008dc;
        *(undefined1 *)(param_2 + 0x101) = 0;
        *(undefined4 *)(param_2 + 0xc) = uVar3;
        *(undefined4 *)(param_2 + 0x10) = 0x590;
        FUN_00331754(0);
      }
    }
  }
  return;
}
