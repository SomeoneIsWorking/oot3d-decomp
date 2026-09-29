// OoT3D decomp @ 0024c910  name=FUN_0024c910  size=988

void FUN_0024c910(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;

  iVar2 = *(int *)(DAT_0024ccec + param_2);
  FUN_00353dd0(param_2,param_1 + 0x1a4);
  FUN_00353d24(param_2,param_1 + 0x1a4,param_1,DAT_0024ccf0);
  *(char *)(param_1 + 0x233) = (char)*(undefined2 *)(param_1 + 0x1c) + -1;
  uVar6 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x30),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar5 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x2c),
                              (byte)(in_fpscr >> 0x15) & 3);
  uVar4 = VectorSignedToFloat((int)(short)(int)*(float *)(param_1 + 0x28),
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_003591e4(uVar4,uVar5,uVar6,param_1 + 0x200,0xff,0xff,0xff,0,0);
  uVar6 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x200);
  uVar5 = DAT_0024ccf8;
  uVar4 = DAT_0024ccf4;
  *(undefined4 *)(param_1 + 0x1fc) = uVar6;
  *(undefined4 *)(param_1 + 0x1e4) = uVar4;
  *(undefined4 *)(param_1 + 0x1e8) = uVar5;
  *(undefined4 *)(param_1 + 0x1ec) = DAT_0024ccfc;
  *(undefined4 *)(param_1 + 0x220) = uVar4;
  *(undefined2 *)(param_1 + 0x230) = 8;
  uVar5 = *(undefined4 *)(iVar2 + 0x2344);
  uVar6 = *(undefined4 *)(iVar2 + 0x2348);
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar2 + 0x2340);
  *(undefined4 *)(param_1 + 0x2c) = uVar5;
  *(undefined4 *)(param_1 + 0x30) = uVar6;
  *(undefined4 *)(param_1 + 0x218) = uVar4;
  *(undefined4 *)(param_1 + 0x228) = uVar4;
  uVar4 = DAT_0024cd00;
  *(short *)(param_1 + 0xbe) = *(short *)(iVar2 + 0xbe) + -0x8000;
  *(undefined1 *)(param_1 + 3) = 0xff;
  FUN_0037572c(uVar4,param_1);
  *(undefined1 *)(param_1 + 0x236) = 0;
  if ((*(uint *)(iVar2 + 0x1714) & 0x20000) == 0) {
    *(undefined4 *)(param_1 + 0x22c) = DAT_0024cd04;
  }
  else {
    if (((*(char *)(DAT_0024cd08 + 0x4e) == '\0') || (*(short *)(DAT_0024cd0c + 0x80) != 0)) ||
       ((((int)*(short *)(param_1 + 0x1c) & 0xff00U) != 0 &&
        (iVar1 = FUN_003318bc(param_2,((int)*(short *)(param_1 + 0x1c) & 0xff00U) >> 8,0),
        iVar1 == 0)))) {
      FUN_0037547c(DAT_0024cd18,iVar2 + 0x28,4,DAT_0024cd14,DAT_0024cd14,DAT_0024cd10);
      FUN_0037547c(DAT_0024cd1c,iVar2 + 0x28,4,DAT_0024cd14,DAT_0024cd14,DAT_0024cd10);
      FUN_00374428(param_1);
      return;
    }
    iVar1 = DAT_0024cd20;
    *(uint *)(iVar2 + 0x1714) = *(uint *)(iVar2 + 0x1714) & 0xfffdffff;
    *(undefined1 *)(param_1 + 0x236) = 1;
    *(undefined4 *)(param_1 + 0x1bc) = *(undefined4 *)(iVar1 + (uint)*(byte *)(param_1 + 0x233) * 4)
    ;
    *(undefined1 *)(param_1 + 0x232) = 1;
    if (*(char *)(param_1 + 0x233) == '\x01') {
      *(undefined1 *)(param_1 + 0x235) = 2;
    }
    else {
      *(undefined1 *)(param_1 + 0x235) = 4;
    }
    uVar5 = DAT_0024cd14;
    uVar4 = DAT_0024cd10;
    *(undefined4 *)(param_1 + 0x22c) = DAT_0024cd24;
    *(undefined2 *)(param_1 + 0x230) = 8;
    FUN_0037547c(DAT_0024cd28,iVar2 + 0x28,4,uVar5,uVar5,uVar4);
    *(undefined4 *)(param_1 + 0x218) = DAT_0024cd2c;
  }
  *(undefined4 *)(param_1 + 0x128) = 0;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (param_2 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_0024cd30 + param_2) != 0)) {
    param_2 = param_2 + 0x3a5c;
  }
  else {
    param_2 = 0;
  }
  param_2 = param_2 + 0x10;
  if (((*DAT_0024cd34 & 1) == 0) && (iVar2 = FUN_003679b4(DAT_0024cd34), iVar2 != 0)) {
    FUN_0036788c(DAT_0024cd38);
  }
  iVar2 = 0;
  piVar3 = *(int **)(DAT_0024cd38 + 0x17c);
  piVar3[2] = *(int *)(param_1 + 0x178);
  do {
    uVar4 = ObjectBankArchive_00358ef8(param_2,iVar2 + 0xc);
    uVar4 = (**(code **)(*piVar3 + 8))(piVar3,uVar4,1);
    *(undefined4 *)(param_1 + iVar2 * 4 + 0x238) = uVar4;
    FUN_0047d548(uVar4,2);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 3);
  piVar3[2] = 0;
  *(undefined2 *)(param_1 + 0x244) = 0;
  uVar4 = FUN_00372f0c(param_2,0x13);
  *(undefined4 *)(param_1 + 0x248) = uVar4;
  uVar4 = FUN_00372f0c(param_2,0x14);
  *(undefined4 *)(param_1 + 0x24c) = uVar4;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x238) + 0xc) + 0x10) = 1;
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x238) + 0xc),*(undefined4 *)(param_1 + 0x248));
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x238) + 0xc) + 0xc) = DAT_0024cd44;
  *(undefined4 *)(param_1 + 0x250) = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x23c) + 0xc) + 0x10) = 1;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x240) + 0xc) + 0x10) = 1;
  uVar4 = FUN_00372f0c(param_2,0x15);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x23c) + 0xc),uVar4);
  uVar4 = FUN_00372f0c(param_2,0x16);
  FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x240) + 0xc),uVar4);
  return;
}
