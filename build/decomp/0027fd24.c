// OoT3D decomp @ 0027fd24  name=FUN_0027fd24  size=256

void FUN_0027fd24(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;

  bVar5 = *(char *)(param_1 + 0x450) - 1;
  *(byte *)(param_1 + 0x450) = bVar5;
  bVar6 = *(char *)(param_1 + 0x451) + 4;
  *(byte *)(param_1 + 0x451) = bVar6;
  bVar7 = *(char *)(param_1 + 0x452) + 5;
  *(byte *)(param_1 + 0x452) = bVar7;
  if (bVar5 < 200) {
    *(undefined1 *)(param_1 + 0x450) = 200;
  }
  if (200 < bVar6) {
    *(undefined1 *)(param_1 + 0x451) = 200;
  }
  if (0xe6 < bVar7) {
    *(undefined1 *)(param_1 + 0x452) = 0xe6;
  }
  uVar4 = DAT_0027fe48;
  uVar3 = DAT_0027fe44;
  uVar2 = DAT_0027fe40;
  if ((*(uint *)(param_1 + 0x11c) & 0x400000) != 0) {
    if ((*(uint *)(DAT_0027fe34 + param_2) & 0x7f) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    *(float *)(param_1 + 0x47c) = *(float *)(param_1 + 0x47c) + *(float *)(param_1 + 0x480);
    FUN_0036e168(DAT_0027fe4c,uVar4,uVar3,uVar2,param_1 + 0x484);
  }
  sVar1 = *(short *)(param_1 + 0x446) + -1;
  *(short *)(param_1 + 0x446) = sVar1;
  if (sVar1 == 0) {
    FUN_00350348(param_1);
    *(undefined1 *)(param_1 + 0x451) = 200;
    *(undefined1 *)(param_1 + 0x450) = 200;
    *(undefined1 *)(param_1 + 0x452) = 0xff;
    *(undefined2 *)(param_1 + 0x448) = 900;
    uVar2 = DAT_0027fe50;
    *(undefined1 *)(param_1 + 0x445) = 1;
    *(undefined4 *)(param_1 + 0x474) = uVar2;
    *(short *)(param_1 + 0x45a) = *(short *)(param_1 + 0x45a) + 1;
  }
  return;
}
