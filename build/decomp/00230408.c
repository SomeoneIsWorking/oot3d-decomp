// OoT3D decomp @ 00230408  name=FUN_00230408  size=516

void FUN_00230408(int param_1,undefined4 param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  float fVar6;

  uVar5 = DAT_0023055c;
  cVar1 = *(char *)(param_1 + 0x840);
  if (cVar1 == '\0') {
    *(undefined1 *)(param_1 + 0x840) = 1;
    *(char *)(param_1 + 0x842) = *(char *)(param_1 + 0x842) + '\x01';
    *(undefined1 *)(param_1 + 0x87d) = 0x11;
    *(undefined1 *)(param_1 + 0x860) = 0x11;
    *(undefined4 *)(param_1 + 0x868) = 0xffcfffff;
    *(undefined1 *)(param_1 + 0x86d) = 4;
  }
  else if (cVar1 != '\x01') {
    if (cVar1 != '\x02') {
      return;
    }
    *(undefined1 *)(param_1 + 0x842) = 0;
    *(undefined4 *)(param_1 + 0x890) = uVar5;
    *(undefined1 *)(param_1 + 0x87d) = 0;
    *(undefined1 *)(param_1 + 0x860) = 0;
    *(undefined1 *)(param_1 + 0x86d) = 0;
    *(undefined4 *)(param_1 + 0x868) = 0;
    FUN_0036e734(param_1 + 0x1a4,3);
    uVar5 = DAT_002b67f8;
    if (*DAT_002b67fc == 0) {
      *(undefined4 *)(*(int *)(param_1 + 0x934) + 8) = DAT_002b67f8;
      FUN_003586ec();
    }
    uVar2 = DAT_002b6800;
    *(undefined1 *)(param_1 + 0x84b) = 0;
    fVar6 = (float)FUN_003738a8(uVar2);
    *(float *)(param_1 + 0x28) = fVar6 + *(float *)(param_1 + 8);
    fVar6 = (float)FUN_003738a8(uVar2);
    *(float *)(param_1 + 0x30) = fVar6 + *(float *)(param_1 + 0x10);
    *(undefined4 *)(param_1 + 0xc4) = DAT_002b6804;
    *(undefined4 *)(param_1 + 0x6c) = uVar5;
    *(undefined4 *)(param_1 + 0x924) = uVar5;
    *(undefined2 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)(param_1 + 0x840) = 0;
    *(undefined2 *)(param_1 + 0x84e) = 0;
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
    *(undefined4 *)(param_1 + 0x844) = DAT_002b6808;
    return;
  }
  uVar2 = DAT_00230564;
  uVar5 = DAT_00230560;
  *(short *)(param_1 + 0x84e) = *(short *)(param_1 + 0x84e) + 0x2ff;
  FUN_0036e168(DAT_0023056c,DAT_00230568,uVar2,uVar5,param_1 + 0x924);
  fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x84e));
  *(float *)(param_1 + 0x928) = fVar6 * DAT_00230570;
  fVar6 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x84e));
  uVar2 = DAT_0023057c;
  uVar5 = DAT_00230578;
  uVar4 = VectorSignedToFloat((int)(short)(int)(fVar6 * DAT_00230574),(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x92c) = uVar4;
  FUN_003327a4(*(undefined4 *)(param_1 + 0x924),uVar2,uVar5,param_2,param_1,param_1 + 0x28,4);
  uVar5 = VectorSignedToFloat((int)(short)(int)(*(float *)(param_1 + 0x924) * DAT_00230580),
                              (byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x890) = uVar5;
  iVar3 = FUN_003731e0(param_1 + 0x1a4);
  if (iVar3 != 0) {
    *(char *)(param_1 + 0x840) = *(char *)(param_1 + 0x840) + '\x01';
  }
  return;
}
