// OoT3D decomp @ 0040294c  name=FUN_0040294c  size=232

void FUN_0040294c(void)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;

  iVar1 = DAT_00402a34;
  if (*(char *)(DAT_00402a34 + 1) != '\0') {
    FUN_0030c8bc();
    FUN_0030c824(DAT_00402a38);
    FUN_0030c8bc();
    FUN_0030e550();
    FUN_0030c7cc();
    FUN_00405924();
    FUN_0030c758();
    FUN_00406308();
    FUN_0030c6e0();
    FUN_00405a58();
    uVar2 = extraout_r1;
    if (((*DAT_00402a3c & 1) == 0) &&
       (uVar3 = FUN_003679b4(DAT_00402a3c), uVar2 = (int)((ulonglong)uVar3 >> 0x20), (int)uVar3 != 0
       )) {
      FUN_0030c5b8(DAT_00402a40);
      uVar2 = DAT_00402a48;
    }
    FUN_0040637c(DAT_00402a40,uVar2);
    FUN_0030c5a8(DAT_00402a4c);
    FUN_0030c7cc();
    FUN_00405950();
    FUN_0030c550();
    FUN_0030a668();
    FUN_0030c4f4();
    FUN_0030a668();
    *(undefined1 *)(iVar1 + 1) = 0;
  }
  return;
}
