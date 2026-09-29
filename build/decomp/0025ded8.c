// OoT3D decomp @ 0025ded8  name=FUN_0025ded8  size=588

void FUN_0025ded8(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  bool bVar4;
  undefined1 auStack_27c [4];
  undefined1 auStack_278 [576];
  undefined1 local_38;
  undefined1 local_37;
  undefined1 local_36;
  undefined1 local_35;
  undefined1 local_34;
  undefined1 local_33;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined1 local_2f;
  undefined1 local_2e;
  undefined1 local_2d;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 local_20;
  undefined1 local_18;

  FUN_00350820(auStack_278,DAT_0025e124,0x24,0x10);
  FUN_003510b0(param_1,DAT_0025e128);
  cVar1 = (char)*(undefined2 *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x1a9) = cVar1;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) >> 8;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  *(undefined1 *)(param_1 + 0x19b) = 3;
  if (cVar1 != '\0') {
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x80;
  }
  FUN_0034f910(param_2,param_1 + 0x20c);
  FUN_0034f760(param_2,param_1 + 0x20c,param_1,DAT_0025e12c,param_1 + 0x22c);
  FUN_00353dd0(param_2,param_1 + 0x1b4);
  FUN_00353d24(param_2,param_1 + 0x1b4,param_1,DAT_0025e130);
  *(undefined4 *)(param_1 + 0x200) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x204) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x208) = *(undefined4 *)(param_1 + 0x30);
  FUN_00350d20(param_1 + 0xa0,0,DAT_0025e134);
  local_38 = *DAT_0025e138;
  local_34 = DAT_0025e138[4];
  local_30 = DAT_0025e138[8];
  local_2c = DAT_0025e138[0xc];
  local_37 = DAT_0025e138[1];
  local_33 = DAT_0025e138[5];
  local_2f = DAT_0025e138[9];
  local_2b = DAT_0025e138[0xd];
  local_36 = DAT_0025e138[2];
  local_32 = DAT_0025e138[6];
  local_2e = DAT_0025e138[10];
  local_2a = DAT_0025e138[0xe];
  local_35 = DAT_0025e138[3];
  local_31 = DAT_0025e138[7];
  local_2d = DAT_0025e138[0xb];
  local_29 = DAT_0025e138[0xf];
  local_28 = 0xf;
  local_18 = 0xf;
  bVar4 = *(char *)(param_1 + 0x1a9) == '\0';
  if (bVar4) {
    local_24 = 0;
  }
  local_20 = 2;
  if (!bVar4) {
    local_24 = 1;
  }
  FUN_00350660(param_2,param_1 + 0x1ac,1,0,0,auStack_27c);
  FUN_00350660(param_2,param_1 + 0x1b0,1,0,0,auStack_27c);
  if (*(short *)(param_1 + 0x1c) == 0) {
    uVar3 = FUN_00363c10(param_2 + 0x3a58,0x69);
    *(undefined1 *)(param_1 + 0x1a8) = uVar3;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  }
  else {
    uVar3 = FUN_00363c10(param_2 + 0x3a58,0x6b);
    uVar2 = DAT_0025e13c;
    *(undefined1 *)(param_1 + 0x1a8) = uVar3;
    *(undefined4 *)(param_1 + 500) = uVar2;
    *(undefined4 *)(param_1 + 0x1f8) = DAT_0025e140;
    FUN_0037322c(DAT_0025e144,param_1);
  }
  if (*(char *)(param_1 + 0x1a8) < '\0') {
    FUN_00374428(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_0025e148;
  }
  return;
}
