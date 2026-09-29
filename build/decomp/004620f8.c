// OoT3D decomp @ 004620f8  name=z_lights_004620f8  size=304

void z_lights_004620f8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;

  *(undefined4 *)(param_2 + 0x18) = 0;
  *(undefined4 *)(param_2 + 0x1c) = 0;
  iVar1 = (**(code **)(*(int *)*DAT_0046222c + 0xc))
                    ((int *)*DAT_0046222c,0x1b8,DAT_00462228,DAT_00462230);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_00348f34(iVar1,DAT_00462234);
  }
  *(undefined4 *)(param_2 + 0x18) = uVar2;
  FUN_00348be4();
  uVar3 = FUN_00363c10(param_1 + 0x3a58,1);
  if (((uVar3 & 0xff) < 0x13) &&
     (param_1 = param_1 + (uVar3 & 0xff) * 0x80, *(int *)(DAT_00462238 + param_1) != 0)) {
    param_1 = param_1 + 0x3a5c;
  }
  else {
    param_1 = 0;
  }
  uVar2 = ObjectBankArchive_00372c90(param_1 + 0x10,1);
  FUN_00348a64(*(undefined4 *)(param_2 + 0x18),0,uVar2,DAT_00462240,DAT_00462240,DAT_0046223c,
               DAT_0046223c);
  if (((*DAT_00462244 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_00462244), iVar1 != 0)) {
    FUN_0036788c(DAT_00462248);
  }
  uVar2 = BoardModelFactory_00340d00
                    (*(undefined4 *)(DAT_00462254 + 0x47c),*(undefined4 *)(param_2 + 0x18),0);
  *(undefined4 *)(param_2 + 0x1c) = uVar2;
  FUN_0034ea48(uVar2,DAT_00462258);
  return;
}
