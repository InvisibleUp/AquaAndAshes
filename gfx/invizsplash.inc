; Input Image Attributes --

; Filename: 	invizsplash.png
; Pixel Width:	160px
; Pixel Height:	144px

; Map Data Constants --
invizsplash_map_size	EQU $168
invizsplash_map_width	EQU $14
invizsplash_map_height	EQU $12

; Tile Data Constants --
invizsplash_tile_size	EQU $670

; Map Data --
invizsplash_map_data:

DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$01,$02,$03,$04,$05,$06,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$07,$08,$09
DB $0A,$0B,$0C,$0D,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$0E,$0F,$10,$11,$12,$13,$14,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$15,$00,$16,$17,$18,$19,$1A,$1B,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$1C,$1D,$1E,$1F,$20,$21,$22
DB $23,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$24,$25
DB $26,$27,$28,$29,$00,$00,$00,$2A,$00,$2B,$00,$00,$00,$00,$00,$00
DB $00,$00,$2C,$2D,$2E,$2F,$30,$00,$00,$31,$32,$33,$34,$35,$36,$37
DB $38,$39,$00,$00,$00,$00,$3A,$3B,$3C,$3D,$3E,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$3F,$00,$00,$00,$40,$41,$42,$43,$44,$45,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$46,$47,$48
DB $49,$4A,$4B,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$4C,$4D,$4E,$4F,$50,$51,$52,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$53,$54,$55,$56,$57,$57,$58,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$59,$5A,$5B,$56,$57,$57,$5C
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$5D,$5E,$5F
DB $56,$57,$57,$60,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$61,$62,$57,$57,$63,$00,$00,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$64,$65,$66,$67,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00

; Tile Data --
invizsplash_tile_data:
DB $00,$00,$00,$00,$00,$00,$03,$02,$07,$05,$0E,$0A,$1C,$14,$38,$28
DB $03,$01,$1F,$0A,$FE,$54,$F0,$A0,$80,$00,$00,$00,$00,$00,$00,$00
DB $FF,$55,$FF,$AA,$01,$01,$00,$00,$01,$01,$01,$01,$07,$07,$0F,$0F
DB $00,$00,$E0,$A0,$F0,$50,$38,$28,$9D,$95,$8F,$8A,$87,$85,$87,$82
DB $00,$00,$0F,$0A,$0F,$05,$ED,$A8,$FD,$55,$BC,$A8,$9E,$14,$CE,$8A
DB $00,$00,$00,$00,$80,$00,$C0,$80,$C0,$40,$FC,$A8,$7E,$54,$67,$22
DB $70,$50,$60,$20,$60,$40,$60,$20,$EF,$4F,$CF,$8F,$C3,$43,$C1,$81
DB $00,$00,$00,$00,$00,$00,$FC,$FC,$FE,$FE,$FF,$FF,$E7,$E7,$C3,$C3
DB $1F,$1F,$3F,$3F,$39,$39,$38,$38,$38,$38,$1C,$1C,$1C,$1C,$8E,$8E
DB $83,$81,$C3,$C2,$E3,$E1,$E1,$E0,$71,$71,$71,$70,$70,$70,$70,$70
DB $E7,$45,$E3,$A2,$B0,$10,$9C,$88,$8F,$05,$C7,$82,$CE,$44,$CC,$88
DB $23,$01,$31,$20,$31,$11,$F9,$A8,$9F,$15,$1E,$0A,$30,$10,$60,$20
DB $80,$00,$C0,$80,$E0,$40,$E0,$A0,$60,$40,$60,$20,$60,$40,$60,$20
DB $C0,$40,$C0,$80,$C0,$40,$C0,$80,$C0,$40,$C0,$80,$E0,$40,$60,$20
DB $E1,$E1,$E1,$E1,$70,$70,$78,$78,$3F,$3F,$1F,$1F,$07,$07,$00,$00
DB $CF,$CF,$C7,$C7,$C0,$C0,$C0,$C0,$C0,$C0,$86,$80,$0E,$00,$00,$00
DB $F0,$F0,$E0,$E0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $EC,$44,$6E,$2A,$6F,$45,$63,$22,$61,$41,$60,$20,$60,$40,$E0,$A0
DB $C0,$40,$80,$80,$00,$00,$E0,$A0,$F0,$50,$38,$28,$18,$10,$1C,$08
DB $30,$10,$38,$28,$1C,$14,$1C,$0C,$1E,$16,$1E,$06,$2F,$03,$6F,$03
DB $60,$40,$70,$20,$30,$10,$38,$28,$18,$10,$1C,$08,$0E,$04,$07,$02
DB $00,$00,$00,$00,$03,$03,$FF,$FF,$FF,$FF,$7F,$7F,$3F,$3F,$00,$00
DB $00,$00,$00,$00,$C0,$C0,$C1,$C0,$81,$81,$81,$80,$01,$01,$03,$02
DB $C0,$40,$C0,$80,$C0,$40,$C0,$80,$80,$00,$80,$80,$80,$00,$00,$00
DB $0F,$06,$0F,$0E,$07,$07,$03,$03,$03,$03,$01,$01,$00,$00,$00,$00
DB $77,$01,$B7,$01,$BB,$00,$DB,$00,$DD,$80,$DD,$C0,$DD,$C0,$FB,$C0
DB $80,$80,$C0,$C0,$C0,$C0,$E0,$E0,$E0,$60,$E0,$60,$F0,$70,$B0,$30
DB $03,$01,$01,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $80,$00,$E0,$A0,$FC,$54,$3F,$2A,$07,$05,$00,$00,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$FF,$AA,$FF,$55,$38,$28,$18,$10,$1C,$08
DB $03,$01,$07,$02,$1F,$15,$FF,$AA,$F1,$51,$01,$00,$01,$01,$01,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$80,$00,$83,$83,$FF,$7F,$FF,$FE
DB $00,$00,$00,$00,$01,$01,$07,$07,$3F,$3F,$FF,$FC,$FC,$E0,$E3,$00
DB $FB,$C0,$F7,$C0,$EF,$C0,$DE,$80,$BD,$00,$7B,$00,$F7,$01,$CF,$03
DB $B0,$30,$70,$30,$70,$70,$E0,$60,$E0,$E0,$E0,$E0,$C0,$C0,$80,$80
DB $00,$00,$00,$00,$00,$00,$00,$00,$01,$01,$03,$03,$07,$07,$0F,$0E
DB $0C,$04,$1C,$18,$3F,$3F,$FF,$FF,$EF,$C0,$B7,$80,$B7,$00,$BB,$00
DB $01,$01,$01,$01,$81,$81,$FF,$FF,$FF,$FF,$BD,$00,$BE,$00,$BE,$00
DB $F8,$C0,$FF,$C0,$C7,$C0,$B8,$80,$9F,$87,$ED,$01,$F6,$00,$FB,$00
DB $1F,$00,$FC,$00,$F3,$00,$0F,$01,$FF,$C7,$FF,$FF,$7E,$7E,$B0,$30
DB $3F,$07,$FE,$1E,$FC,$7C,$F8,$F8,$E0,$E0,$80,$80,$00,$00,$00,$00
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$06,$06,$06,$06
DB $00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$D8,$D8,$D8,$D8
DB $0D,$0C,$1F,$1C,$1B,$18,$3F,$38,$37,$30,$37,$30,$77,$70,$77,$60
DB $BB,$08,$7B,$18,$7B,$18,$7D,$38,$7D,$38,$7E,$30,$7E,$30,$7E,$30
DB $DF,$00,$DF,$00,$EF,$00,$EF,$00,$EF,$00,$EF,$00,$F7,$00,$F7,$00
DB $7B,$00,$7D,$00,$7D,$00,$7D,$00,$BE,$00,$BE,$00,$BE,$00,$DE,$00
DB $B8,$38,$D8,$18,$DC,$1C,$EC,$0C,$EE,$0E,$F6,$06,$F6,$06,$F6,$06
DB $30,$30,$37,$37,$36,$36,$36,$36,$36,$36,$36,$36,$36,$36,$36,$36
DB $00,$00,$E6,$E6,$36,$36,$36,$36,$33,$33,$33,$33,$31,$31,$31,$31
DB $00,$00,$36,$36,$36,$36,$36,$36,$66,$66,$66,$66,$C6,$C6,$C6,$C6
DB $00,$00,$7C,$7C,$C0,$C0,$C0,$C0,$7C,$7C,$06,$06,$06,$06,$FC,$FC
DB $18,$18,$DB,$DB,$DC,$DC,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$DF,$DF
DB $18,$18,$98,$98,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$D8,$8F,$8F
DB $00,$00,$7C,$7C,$C6,$C6,$C6,$C6,$FE,$FE,$C0,$C0,$C0,$C0,$7E,$7E
DB $C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$7C,$7C
DB $00,$00,$DC,$DC,$E6,$E6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$C6,$FC,$FC
DB $76,$60,$6E,$60,$6E,$60,$EE,$E0,$EE,$C0,$DD,$C0,$DD,$C0,$DD,$C0
DB $FE,$38,$FE,$3C,$FE,$3C,$FE,$3C,$FE,$7E,$FF,$7F,$EF,$6F,$EF,$EF
DB $F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$80,$F7,$00
DB $DE,$00,$DE,$00,$DE,$00,$DE,$00,$DE,$00,$DD,$00,$DD,$00,$DD,$00
DB $F6,$06,$F6,$06,$EE,$0E,$EE,$0E,$EC,$0C,$EC,$0C,$EC,$0C,$EC,$0C
DB $C0,$C0,$C0,$C0,$C0,$C0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $01,$01,$01,$01,$01,$01,$01,$01,$03,$03,$03,$03,$03,$03,$03,$03
DB $FB,$C0,$BB,$80,$FB,$81,$F7,$81,$F7,$81,$F7,$01,$F7,$01,$EF,$01
DB $EE,$EC,$CD,$CC,$CD,$CC,$CF,$CE,$87,$86,$87,$86,$87,$86,$87,$86
DB $F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00,$F7,$00
DB $BD,$00,$BD,$00,$BD,$00,$BD,$00,$BD,$00,$BD,$00,$BD,$00,$BE,$00
DB $EC,$0C,$FC,$1C,$F8,$18,$F8,$18,$F8,$18,$FC,$1C,$FC,$0C,$FC,$0C
DB $03,$03,$07,$07,$07,$06,$07,$06,$07,$06,$0F,$0E,$0F,$0C,$0F,$04
DB $EF,$03,$EF,$03,$DF,$07,$DF,$07,$DE,$06,$BE,$0E,$BE,$0E,$BC,$1C
DB $87,$86,$07,$06,$07,$06,$07,$07,$03,$03,$03,$03,$03,$03,$07,$07
DB $F7,$00,$EF,$00,$EF,$00,$EF,$00,$EF,$00,$EF,$00,$EF,$00,$EF,$00
DB $BE,$00,$BE,$00,$BE,$00,$BF,$00,$BF,$00,$9F,$00,$DF,$00,$DF,$00
DB $FE,$0E,$F6,$06,$F6,$06,$76,$06,$76,$06,$76,$06,$77,$07,$BF,$0F
DB $1D,$08,$1C,$14,$18,$08,$18,$10,$18,$08,$18,$10,$18,$08,$38,$10
DB $BC,$1C,$B8,$18,$78,$18,$38,$18,$38,$28,$38,$10,$38,$28,$18,$10
DB $07,$06,$07,$06,$0F,$0E,$0F,$0F,$0F,$0E,$0F,$0F,$0F,$0E,$0F,$0F
DB $DF,$00,$DF,$00,$DF,$00,$FF,$FF,$FF,$AF,$FF,$FF,$FF,$AF,$FF,$FF
DB $DF,$00,$DF,$03,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $FF,$7F,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $00,$00,$80,$80,$80,$80,$80,$80,$C0,$C0,$C0,$C0,$C0,$C0,$C0,$C0
DB $30,$20,$30,$10,$30,$20,$70,$50,$60,$20,$60,$40,$60,$20,$60,$40
DB $1C,$08,$0C,$04,$0E,$0A,$46,$44,$C6,$82,$C6,$44,$C6,$82,$C6,$44
DB $0F,$0E,$1F,$1F,$1F,$1E,$1F,$1F,$1F,$1A,$3F,$3F,$3F,$3A,$3F,$3F
DB $FF,$AB,$FF,$FF,$FF,$AB,$FF,$FF,$FF,$AB,$FF,$FF,$FF,$AB,$FF,$FF
DB $FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF,$FF
DB $E0,$E0,$E0,$E0,$E0,$E0,$E0,$E0,$F0,$F0,$F0,$F0,$F0,$F0,$F0,$F0
DB $60,$20,$64,$44,$E6,$A2,$F6,$54,$D3,$82,$DB,$51,$DB,$8A,$F9,$51
DB $66,$22,$7E,$54,$3C,$28,$18,$10,$18,$08,$18,$10,$18,$08,$98,$10
DB $3F,$3A,$3F,$3F,$3F,$3A,$3F,$3F,$3F,$3A,$7F,$7F,$7F,$7A,$7F,$7F
DB $F8,$F8,$F8,$F8,$F8,$F8,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC,$FC
DB $7D,$28,$0F,$05,$07,$02,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $B8,$A8,$F0,$50,$E0,$A0,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $7F,$6A,$7F,$7F,$7F,$6A,$FF,$FF,$FF,$EA,$FF,$FF,$FF,$EA,$FF,$FF
DB $FC,$FC,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE
DB $FF,$AA,$FF,$FF,$FF,$AA,$FF,$FF,$FF,$EA,$FF,$FF,$7F,$7A,$3F,$3F
DB $FF,$AB,$FF,$FF,$FF,$AF,$FF,$FF,$FF,$AF,$FF,$FF,$FF,$BF,$FF,$FF
DB $FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FE,$FC,$FC,$F8,$F8,$E0,$E0
DB $0F,$0F,$03,$03,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $FF,$FF,$FF,$FF,$FF,$FF,$C0,$80,$C0,$40,$C0,$80,$C0,$40,$C0,$80
DB $FF,$FF,$FF,$FF,$FF,$FF,$00,$00,$00,$00,$00,$00,$00,$00,$00,$00
DB $FF,$FF,$FC,$FC,$F8,$E8,$38,$10,$38,$28,$30,$10,$30,$20,$30,$10
