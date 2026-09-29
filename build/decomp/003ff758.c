// OoT3D decomp @ 003ff758  name=FUN_003ff758  size=272

void FUN_003ff758(int param_1,undefined4 param_2)

{
  code *pcVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;

  uVar7 = 0;
  uVar8 = *(uint *)(DAT_003ff868 + 0x14);
  local_2c = param_2;
  local_28 = param_1;
  do {
    pcVar1 = DAT_003ff870;
    iVar2 = DAT_003ff868;
    if (uVar8 == 0) {
      return;
    }
    iVar6 = DAT_003ff86c + uVar7 * 0xa0;
    if (local_28 == *(int *)(iVar6 + 0x84)) {
      iVar5 = 0;
      *(undefined1 *)(DAT_003ff868 + 4) = 0;
      *(undefined4 *)(iVar2 + 0x18) = local_2c;
      do {
        iVar2 = iVar6 + iVar5 * 0x10;
        piVar3 = (int *)(iVar2 + 0xc);
        piVar4 = (int *)*piVar3;
        if (piVar4 != piVar3) {
          do {
            piVar3 = (int *)*piVar4;
            local_30 = 0;
            FUN_0030f0fc(&local_30,piVar4 + -0x3b);
            (*pcVar1)(&local_30);
            FUN_00313bdc(&local_30);
            piVar4 = piVar3;
          } while (piVar3 != (int *)(iVar2 + 0xc));
        }
        iVar2 = DAT_003ff868;
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      if (*(char *)(DAT_003ff868 + 4) != '\0') {
        *(undefined4 *)(iVar6 + 0x84) = 0;
        *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & ~(1 << (uVar7 & 0xff));
      }
    }
    uVar7 = uVar7 + 1;
    uVar8 = uVar8 >> 1;
  } while ((int)uVar7 < 0x20);
  return;
}
